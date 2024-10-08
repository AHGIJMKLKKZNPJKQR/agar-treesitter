#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
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
  anon_sym_LBRACK = 4,
  anon_sym_COMMA = 5,
  anon_sym_RBRACK = 6,
  anon_sym_let = 7,
  anon_sym_COLON = 8,
  anon_sym_EQ = 9,
  anon_sym_DASH_GT = 10,
  anon_sym_EQ_GT = 11,
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
  sym_application = 22,
  sym_function_definition = 23,
  sym_parameter_list = 24,
  sym_parameter = 25,
  sym__type = 26,
  sym_primitive_type = 27,
  sym_function_type = 28,
  sym_argument_type_list = 29,
  sym_return_type = 30,
  sym__literal = 31,
  sym_boolean = 32,
  aux_sym_application_repeat1 = 33,
  aux_sym_parameter_list_repeat1 = 34,
  aux_sym_argument_type_list_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
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
  [sym_application] = "application",
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
  [aux_sym_application_repeat1] = "application_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_type_list_repeat1] = "argument_type_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
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
  [sym_application] = sym_application,
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
  [aux_sym_application_repeat1] = aux_sym_application_repeat1,
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
  [sym_application] = {
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
  [aux_sym_application_repeat1] = {
    .visible = false,
    .named = false,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
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
        ',', 18,
        '-', 3,
        ':', 21,
        ';', 16,
        '=', 23,
        'B', 10,
        'I', 7,
        'U', 8,
        '[', 17,
        ']', 19,
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
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == ']') ADVANCE(19);
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
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(25);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
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
      if (lookahead == 't') ADVANCE(20);
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
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
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
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
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
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_Unit] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym__expression] = STATE(41),
    [sym_group] = STATE(41),
    [sym_application] = STATE(41),
    [sym_function_definition] = STATE(41),
    [sym__literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      sym_number,
    STATE(3), 1,
      aux_sym_application_repeat1,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [31] = 8,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      anon_sym_RBRACK,
    ACTIONS(22), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(28), 1,
      sym_number,
    STATE(3), 1,
      aux_sym_application_repeat1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [62] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_RBRACK,
    ACTIONS(36), 1,
      sym_number,
    STATE(2), 1,
      aux_sym_application_repeat1,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [93] = 7,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    ACTIONS(40), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [121] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(42), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [146] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [171] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(46), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [196] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(57), 1,
      sym_argument_type_list,
    ACTIONS(53), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(61), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [219] = 6,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(57), 1,
      sym_argument_type_list,
    ACTIONS(60), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(44), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [242] = 6,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(57), 1,
      sym_argument_type_list,
    ACTIONS(60), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(43), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [265] = 6,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(57), 1,
      sym_argument_type_list,
    ACTIONS(60), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(39), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [288] = 5,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_return_type,
    STATE(57), 1,
      sym_argument_type_list,
    ACTIONS(60), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(26), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [308] = 4,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_argument_type_list,
    ACTIONS(60), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(60), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [325] = 4,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_argument_type_list,
    ACTIONS(60), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(49), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [342] = 4,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_argument_type_list,
    ACTIONS(60), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(67), 3,
      sym__type,
      sym_primitive_type,
      sym_function_type,
  [359] = 2,
    ACTIONS(20), 3,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      sym_number,
    ACTIONS(64), 4,
      anon_sym_let,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [371] = 2,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [382] = 3,
    ACTIONS(72), 1,
      anon_sym_EQ,
    ACTIONS(74), 1,
      anon_sym_DASH_GT,
    ACTIONS(70), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [395] = 1,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [403] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [411] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [419] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [427] = 2,
    ACTIONS(86), 1,
      anon_sym_EQ,
    ACTIONS(84), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [437] = 2,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [447] = 2,
    ACTIONS(94), 1,
      anon_sym_EQ,
    ACTIONS(92), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [457] = 2,
    ACTIONS(98), 1,
      anon_sym_EQ,
    ACTIONS(96), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [467] = 1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [475] = 1,
    ACTIONS(51), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
  [483] = 1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [491] = 1,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [499] = 2,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [509] = 4,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_parameter_list_repeat1,
    STATE(50), 1,
      sym_parameter,
  [522] = 4,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
    STATE(65), 1,
      sym_parameter,
  [535] = 4,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
    STATE(46), 1,
      sym_parameter,
  [548] = 3,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
  [558] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      anon_sym_COMMA,
  [568] = 3,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_function_type,
    STATE(57), 1,
      sym_argument_type_list,
  [578] = 2,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      anon_sym_COMMA,
  [585] = 1,
    ACTIONS(112), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [590] = 2,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [597] = 2,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      anon_sym_COMMA,
  [604] = 2,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
  [611] = 2,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
  [618] = 2,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
  [625] = 2,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
  [632] = 2,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym_parameter_list,
  [639] = 2,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      sym_parameter_list,
  [646] = 1,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [651] = 2,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(135), 1,
      anon_sym_COMMA,
  [658] = 2,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_EQ,
  [665] = 1,
    ACTIONS(74), 1,
      anon_sym_DASH_GT,
  [669] = 1,
    ACTIONS(147), 1,
      sym_identifier,
  [673] = 1,
    ACTIONS(149), 1,
      anon_sym_DASH_GT,
  [677] = 1,
    ACTIONS(151), 1,
      anon_sym_DASH_GT,
  [681] = 1,
    ACTIONS(153), 1,
      anon_sym_EQ,
  [685] = 1,
    ACTIONS(155), 1,
      anon_sym_DASH_GT,
  [689] = 1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
  [693] = 1,
    ACTIONS(159), 1,
      anon_sym_DASH_GT,
  [697] = 1,
    ACTIONS(161), 1,
      anon_sym_EQ_GT,
  [701] = 1,
    ACTIONS(125), 1,
      anon_sym_COMMA,
  [705] = 1,
    ACTIONS(163), 1,
      anon_sym_DASH_GT,
  [709] = 1,
    ACTIONS(165), 1,
      anon_sym_DASH_GT,
  [713] = 1,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
  [717] = 1,
    ACTIONS(135), 1,
      anon_sym_COMMA,
  [721] = 1,
    ACTIONS(169), 1,
      anon_sym_DASH_GT,
  [725] = 1,
    ACTIONS(171), 1,
      anon_sym_EQ_GT,
  [729] = 1,
    ACTIONS(173), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 219,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 265,
  [SMALL_STATE(13)] = 288,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 325,
  [SMALL_STATE(16)] = 342,
  [SMALL_STATE(17)] = 359,
  [SMALL_STATE(18)] = 371,
  [SMALL_STATE(19)] = 382,
  [SMALL_STATE(20)] = 395,
  [SMALL_STATE(21)] = 403,
  [SMALL_STATE(22)] = 411,
  [SMALL_STATE(23)] = 419,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 437,
  [SMALL_STATE(26)] = 447,
  [SMALL_STATE(27)] = 457,
  [SMALL_STATE(28)] = 467,
  [SMALL_STATE(29)] = 475,
  [SMALL_STATE(30)] = 483,
  [SMALL_STATE(31)] = 491,
  [SMALL_STATE(32)] = 499,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 522,
  [SMALL_STATE(35)] = 535,
  [SMALL_STATE(36)] = 548,
  [SMALL_STATE(37)] = 558,
  [SMALL_STATE(38)] = 568,
  [SMALL_STATE(39)] = 578,
  [SMALL_STATE(40)] = 585,
  [SMALL_STATE(41)] = 590,
  [SMALL_STATE(42)] = 597,
  [SMALL_STATE(43)] = 604,
  [SMALL_STATE(44)] = 611,
  [SMALL_STATE(45)] = 618,
  [SMALL_STATE(46)] = 625,
  [SMALL_STATE(47)] = 632,
  [SMALL_STATE(48)] = 639,
  [SMALL_STATE(49)] = 646,
  [SMALL_STATE(50)] = 651,
  [SMALL_STATE(51)] = 658,
  [SMALL_STATE(52)] = 665,
  [SMALL_STATE(53)] = 669,
  [SMALL_STATE(54)] = 673,
  [SMALL_STATE(55)] = 677,
  [SMALL_STATE(56)] = 681,
  [SMALL_STATE(57)] = 685,
  [SMALL_STATE(58)] = 689,
  [SMALL_STATE(59)] = 693,
  [SMALL_STATE(60)] = 697,
  [SMALL_STATE(61)] = 701,
  [SMALL_STATE(62)] = 705,
  [SMALL_STATE(63)] = 709,
  [SMALL_STATE(64)] = 713,
  [SMALL_STATE(65)] = 717,
  [SMALL_STATE(66)] = 721,
  [SMALL_STATE(67)] = 725,
  [SMALL_STATE(68)] = 729,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_type_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_type_list_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_type_list_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_type_list, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_type, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 5, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_type_list, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [157] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_type_list, 4, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
