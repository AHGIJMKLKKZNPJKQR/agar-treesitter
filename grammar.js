/**
 * @file Agar grammar for tree-sitter
 * @author Tomasz Mazur
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "agar",
  word: $ => $.identifier,
  rules: {
    source_file: $ => $._expression,
    _expression: $ => choice(
      $.function_definition,
      $.application,
      $._literal,
      $.group,
      $.identifier,
      seq('(', optional($._expression), ')')
    ),
    group: $ => prec.left(
      10,
      seq($._expression, ';', $._expression)
    ),
    application: $ => seq(
      field('function', $.identifier),
      '[',
      repeat(seq($._expression, ',')),
      optional($._expression),
      ']',
    ),
    function_definition: $ => seq(
      'let',
      field('name', $.identifier),
      optional(seq(':', $._function_type)),
      '=',
      field('parameters', $.parameter_list),
      '->',
      field('return_type', $._type),
      '=>',
      field('body', $._expression),
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
      $._function_type,
      seq('(', $._type, ')'),
    ),
    primitive_type: $ => choice(
      'Bool',
      'Unit',
      'Int',
    ),
    _function_type: $ => prec.right(
      50,
      seq($.argument_type_list, '->', $._type)
    ),
    argument_type_list: $ => seq(
      '(',
      repeat(seq($._type, ',')),
      optional($._type),
      ')',
    ),
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
