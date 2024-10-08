/**
 * @file Agar grammar for tree-sitter
 * @author Tomasz Mazur
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "agar",

  rules: {
    source_file: $ => $._expression,
    _expression: $ => choice(
      $.function_definition,
      $._literal,
      $.group,
      $.identifier,
      seq('(', optional($._expression), ')')
    ),
    group: $ => prec.left(
      10,
      seq($._expression, ';', $._expression)
    ),
    function_definition: $ => seq(
      'let',
      $.identifier,
      optional(seq(':', $.function_type)),
      '=',
      $.parameter_list,
      '->',
      $._type,
      '=>',
      $._expression
    ),
    parameter_list: $ => seq(
      '[',
      repeat(seq($.parameter, ',')),
      optional($.parameter),
      ']'
    ),
    parameter: $ => seq(
      $.identifier,
      ':',
      $._type
    ),
    _type: $ => choice(
      $.primitive_type,
      $.function_type,
      seq('(', $._type, ')'),
    ),
    primitive_type: $ => choice(
      'Bool',
      'Unit',
      'Int',
    ),
    function_type: $ => prec.right(
      50,
      seq($.argument_type_list, '->', $.return_type)
    ),
    argument_type_list: $ => seq(
      '(',
      repeat(seq($._type, ',')),
      optional($._type),
      ')',
    ),
    return_type: $ => $._type,
    _literal: $ => choice(
      $.number,
      $.boolean,
    ),
    identifier: $ => /[a-z][a-z_]*/,
    number: $ => /\d+/,
    boolean: $ => choice(
      'true',
      'false',
    )
  }
});
