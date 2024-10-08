#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_SEMI = 3,
  anon_sym_let = 4,
  anon_sym_COLON = 5,
  anon_sym_EQ = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_EQ_GT = 8,
  anon_sym_LBRACK = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  anon_sym_Bool = 12,
  anon_sym_Unit = 13,
  anon_sym_Int = 14,
  sym_identifier = 15,
  sym_number = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  sym_source_file = 19,
  sym__expression = 20,
  sym_group = 21,
  sym_function_definition = 22,
  sym_parameter_list = 23,
  sym_parameter = 24,
  sym__type = 25,
  sym_primitive_type = 26,
  sym_function_type = 27,
  sym_argument_type_list = 28,
  sym_return_type = 29,
  sym__literal = 30,
  sym_boolean = 31,
  aux_sym_parameter_list_repeat1 = 32,
  aux_sym_argument_type_list_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_Bool] = "Bool",
  [anon_sym_Unit] = "Unit",
  [anon_sym_Int] = "Int",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_group] = "group",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_function_type] = "function_type",
  [sym_argument_type_list] = "argument_type_list",
  [sym_return_type] = "return_type",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_type_list_repeat1] = "argument_type_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_Unit] = anon_sym_Unit,
  [anon_sym_Int] = anon_sym_Int,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_group] = sym_group,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_function_type] = sym_function_type,
  [sym_argument_type_list] = sym_argument_type_list,
  [sym_return_type] = sym_return_type,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_type_list_repeat1] = aux_sym_argument_type_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '(', 14,
        ')', 15,
        ',', 24,
        '-', 3,
        ':', 18,
        ';', 16,
        '=', 20,
        'B', 10,
        'I', 7,
        'U', 8,
        '[', 23,
        ']', 25,
        'f', 29,
        'l', 30,
        't', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == ']') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_Unit] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__expression] = STATE(32),
    [sym_group] = STATE(32),
    [sym_function_definition] = STATE(32),
    [sym__literal] = STATE(32),
    [sym_boolean] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 5,
      sym__expression,
      sym_group,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [27] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 5,
      sym__expression,
      sym_group,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [51] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 5,
      sym__expression,
      sym_group,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [75] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 5,
      sym__expression,
      sym_group,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [99] = 6,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(45), 1,
      sym_argument_type_list,
    ACTIONS(35), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(36), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [122] = 6,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(45), 1,
      sym_argument_type_list,
    ACTIONS(35), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(35), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [145] = 6,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(45), 1,
      sym_argument_type_list,
    ACTIONS(35), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(29), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [168] = 6,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(45), 1,
      sym_argument_type_list,
    ACTIONS(44), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(48), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [191] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_return_type,
    STATE(45), 1,
      sym_argument_type_list,
    ACTIONS(35), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(15), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [211] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_argument_type_list,
    ACTIONS(35), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(54), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [228] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_argument_type_list,
    ACTIONS(35), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(39), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [245] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_argument_type_list,
    ACTIONS(35), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(50), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [262] = 3,
    ACTIONS(49), 1,
      anon_sym_EQ,
    ACTIONS(51), 1,
      anon_sym_DASH_GT,
    ACTIONS(47), 4,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [275] = 2,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(53), 4,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [285] = 1,
    ACTIONS(42), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
  [293] = 2,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(57), 4,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [303] = 2,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(61), 4,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [313] = 4,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
    STATE(37), 1,
      sym_parameter,
  [326] = 4,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_parameter_list_repeat1,
    STATE(38), 1,
      sym_parameter,
  [339] = 4,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
    STATE(52), 1,
      sym_parameter,
  [352] = 3,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_argument_type_list,
    STATE(56), 1,
      sym_function_type,
  [362] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [368] = 1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [374] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [380] = 2,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [388] = 2,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [396] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [402] = 2,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 1,
      anon_sym_COMMA,
  [409] = 2,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_parameter_list,
  [416] = 2,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_parameter_list,
  [423] = 2,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [430] = 2,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
  [437] = 1,
    ACTIONS(71), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [442] = 2,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
  [449] = 2,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 1,
      anon_sym_COMMA,
  [456] = 2,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
  [463] = 2,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(104), 1,
      anon_sym_COMMA,
  [470] = 1,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [475] = 2,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(112), 1,
      anon_sym_EQ,
  [482] = 1,
    ACTIONS(51), 1,
      anon_sym_DASH_GT,
  [486] = 1,
    ACTIONS(114), 1,
      anon_sym_DASH_GT,
  [490] = 1,
    ACTIONS(116), 1,
      anon_sym_DASH_GT,
  [494] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [498] = 1,
    ACTIONS(120), 1,
      anon_sym_DASH_GT,
  [502] = 1,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
  [506] = 1,
    ACTIONS(124), 1,
      anon_sym_DASH_GT,
  [510] = 1,
    ACTIONS(94), 1,
      anon_sym_COMMA,
  [514] = 1,
    ACTIONS(126), 1,
      anon_sym_DASH_GT,
  [518] = 1,
    ACTIONS(128), 1,
      anon_sym_EQ_GT,
  [522] = 1,
    ACTIONS(130), 1,
      anon_sym_DASH_GT,
  [526] = 1,
    ACTIONS(104), 1,
      anon_sym_COMMA,
  [530] = 1,
    ACTIONS(132), 1,
      sym_identifier,
  [534] = 1,
    ACTIONS(134), 1,
      anon_sym_EQ_GT,
  [538] = 1,
    ACTIONS(136), 1,
      anon_sym_COLON,
  [542] = 1,
    ACTIONS(138), 1,
      anon_sym_EQ,
  [546] = 1,
    ACTIONS(140), 1,
      anon_sym_DASH_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 262,
  [SMALL_STATE(15)] = 275,
  [SMALL_STATE(16)] = 285,
  [SMALL_STATE(17)] = 293,
  [SMALL_STATE(18)] = 303,
  [SMALL_STATE(19)] = 313,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 339,
  [SMALL_STATE(22)] = 352,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 380,
  [SMALL_STATE(27)] = 388,
  [SMALL_STATE(28)] = 396,
  [SMALL_STATE(29)] = 402,
  [SMALL_STATE(30)] = 409,
  [SMALL_STATE(31)] = 416,
  [SMALL_STATE(32)] = 423,
  [SMALL_STATE(33)] = 430,
  [SMALL_STATE(34)] = 437,
  [SMALL_STATE(35)] = 442,
  [SMALL_STATE(36)] = 449,
  [SMALL_STATE(37)] = 456,
  [SMALL_STATE(38)] = 463,
  [SMALL_STATE(39)] = 470,
  [SMALL_STATE(40)] = 475,
  [SMALL_STATE(41)] = 482,
  [SMALL_STATE(42)] = 486,
  [SMALL_STATE(43)] = 490,
  [SMALL_STATE(44)] = 494,
  [SMALL_STATE(45)] = 498,
  [SMALL_STATE(46)] = 502,
  [SMALL_STATE(47)] = 506,
  [SMALL_STATE(48)] = 510,
  [SMALL_STATE(49)] = 514,
  [SMALL_STATE(50)] = 518,
  [SMALL_STATE(51)] = 522,
  [SMALL_STATE(52)] = 526,
  [SMALL_STATE(53)] = 530,
  [SMALL_STATE(54)] = 534,
  [SMALL_STATE(55)] = 538,
  [SMALL_STATE(56)] = 542,
  [SMALL_STATE(57)] = 546,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_type_list_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_type_list_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_type_list_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_type_list, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_type, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_type_list, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_type_list, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_agar(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
