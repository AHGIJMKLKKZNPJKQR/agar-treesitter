#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_SEMI = 4,
  anon_sym_LBRACK = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACK = 7,
  anon_sym_let = 8,
  anon_sym_COLON = 9,
  anon_sym_EQ = 10,
  anon_sym_DASH_GT = 11,
  anon_sym_EQ_GT = 12,
  anon_sym_Bool = 13,
  anon_sym_Unit = 14,
  anon_sym_Int = 15,
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
  sym__function_type = 28,
  sym_argument_type_list = 29,
  sym__literal = 30,
  sym_boolean = 31,
  aux_sym_application_repeat1 = 32,
  aux_sym_parameter_list_repeat1 = 33,
  aux_sym_argument_type_list_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
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
  [sym__function_type] = "_function_type",
  [sym_argument_type_list] = "argument_type_list",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [aux_sym_application_repeat1] = "application_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_type_list_repeat1] = "argument_type_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
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
  [sym__function_type] = sym__function_type,
  [sym_argument_type_list] = sym_argument_type_list,
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
  [sym_identifier] = {
    .visible = true,
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
  [sym__function_type] = {
    .visible = false,
    .named = true,
  },
  [sym_argument_type_list] = {
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

enum ts_field_identifiers {
  field_body = 1,
  field_function = 2,
  field_name = 3,
  field_parameters = 4,
  field_return_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_function] = "function",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 4},
  [3] = {.index = 5, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_body, 7},
    {field_name, 1},
    {field_parameters, 3},
    {field_return_type, 5},
  [5] =
    {field_body, 9},
    {field_name, 1},
    {field_parameters, 5},
    {field_return_type, 7},
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
        ':', 20,
        ';', 16,
        '=', 22,
        'B', 10,
        'I', 7,
        'U', 8,
        '[', 17,
        ']', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '=') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(25);
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
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(26);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_false);
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
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__expression] = STATE(39),
    [sym_group] = STATE(39),
    [sym_application] = STATE(39),
    [sym_function_definition] = STATE(39),
    [sym__literal] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      sym_number,
    STATE(3), 1,
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
  [31] = 8,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 1,
      sym_number,
    STATE(4), 1,
      aux_sym_application_repeat1,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [62] = 8,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(32), 1,
      sym_number,
    STATE(4), 1,
      aux_sym_application_repeat1,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [93] = 7,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    ACTIONS(40), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [121] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(42), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [146] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(44), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [171] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(46), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 6,
      sym__expression,
      sym_group,
      sym_application,
      sym_function_definition,
      sym__literal,
      sym_boolean,
  [196] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(54), 1,
      sym_argument_type_list,
    ACTIONS(52), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(43), 3,
      sym__type,
      sym_primitive_type,
      sym__function_type,
  [219] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(54), 1,
      sym_argument_type_list,
    ACTIONS(52), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(38), 3,
      sym__type,
      sym_primitive_type,
      sym__function_type,
  [242] = 6,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(54), 1,
      sym_argument_type_list,
    ACTIONS(59), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(58), 3,
      sym__type,
      sym_primitive_type,
      sym__function_type,
  [265] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_argument_type_list_repeat1,
    STATE(54), 1,
      sym_argument_type_list,
    ACTIONS(52), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(46), 3,
      sym__type,
      sym_primitive_type,
      sym__function_type,
  [288] = 4,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_argument_type_list,
    ACTIONS(52), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(28), 3,
      sym__type,
      sym_primitive_type,
      sym__function_type,
  [305] = 4,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_argument_type_list,
    ACTIONS(52), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(65), 3,
      sym__type,
      sym_primitive_type,
      sym__function_type,
  [322] = 4,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_argument_type_list,
    ACTIONS(52), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(49), 3,
      sym__type,
      sym_primitive_type,
      sym__function_type,
  [339] = 4,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_argument_type_list,
    ACTIONS(52), 3,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
    STATE(61), 3,
      sym__type,
      sym_primitive_type,
      sym__function_type,
  [356] = 2,
    ACTIONS(27), 3,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      sym_number,
    ACTIONS(64), 4,
      anon_sym_let,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [368] = 2,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [379] = 3,
    ACTIONS(72), 1,
      anon_sym_EQ,
    ACTIONS(74), 1,
      anon_sym_DASH_GT,
    ACTIONS(70), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [392] = 2,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [402] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [410] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [418] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [426] = 1,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [434] = 2,
    ACTIONS(90), 1,
      anon_sym_EQ,
    ACTIONS(88), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [444] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [452] = 1,
    ACTIONS(57), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_Bool,
      anon_sym_Unit,
      anon_sym_Int,
  [460] = 2,
    ACTIONS(96), 1,
      anon_sym_EQ,
    ACTIONS(94), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [470] = 1,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [478] = 1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [486] = 2,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [496] = 4,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_parameter_list_repeat1,
    STATE(50), 1,
      sym_parameter,
  [509] = 4,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
    STATE(47), 1,
      sym_parameter,
  [522] = 4,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
    STATE(62), 1,
      sym_parameter,
  [535] = 3,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
  [545] = 3,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_argument_type_list,
    STATE(60), 1,
      sym__function_type,
  [555] = 3,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      anon_sym_COMMA,
  [565] = 2,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_COMMA,
  [572] = 2,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [579] = 2,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
  [586] = 2,
    ACTIONS(129), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      anon_sym_EQ,
  [593] = 2,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      anon_sym_COMMA,
  [600] = 2,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_COMMA,
  [607] = 2,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_parameter_list,
  [614] = 1,
    ACTIONS(113), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [619] = 2,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
  [626] = 2,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
  [633] = 2,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_parameter_list,
  [640] = 1,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [645] = 2,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    ACTIONS(137), 1,
      anon_sym_COMMA,
  [652] = 1,
    ACTIONS(143), 1,
      anon_sym_DASH_GT,
  [656] = 1,
    ACTIONS(145), 1,
      anon_sym_DASH_GT,
  [660] = 1,
    ACTIONS(147), 1,
      sym_identifier,
  [664] = 1,
    ACTIONS(149), 1,
      anon_sym_DASH_GT,
  [668] = 1,
    ACTIONS(74), 1,
      anon_sym_DASH_GT,
  [672] = 1,
    ACTIONS(151), 1,
      anon_sym_DASH_GT,
  [676] = 1,
    ACTIONS(153), 1,
      anon_sym_DASH_GT,
  [680] = 1,
    ACTIONS(123), 1,
      anon_sym_COMMA,
  [684] = 1,
    ACTIONS(155), 1,
      anon_sym_DASH_GT,
  [688] = 1,
    ACTIONS(157), 1,
      anon_sym_EQ,
  [692] = 1,
    ACTIONS(159), 1,
      anon_sym_EQ_GT,
  [696] = 1,
    ACTIONS(137), 1,
      anon_sym_COMMA,
  [700] = 1,
    ACTIONS(161), 1,
      anon_sym_COLON,
  [704] = 1,
    ACTIONS(163), 1,
      anon_sym_DASH_GT,
  [708] = 1,
    ACTIONS(165), 1,
      anon_sym_EQ_GT,
  [712] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [716] = 1,
    ACTIONS(169), 1,
      anon_sym_DASH_GT,
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
  [SMALL_STATE(14)] = 305,
  [SMALL_STATE(15)] = 322,
  [SMALL_STATE(16)] = 339,
  [SMALL_STATE(17)] = 356,
  [SMALL_STATE(18)] = 368,
  [SMALL_STATE(19)] = 379,
  [SMALL_STATE(20)] = 392,
  [SMALL_STATE(21)] = 402,
  [SMALL_STATE(22)] = 410,
  [SMALL_STATE(23)] = 418,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 434,
  [SMALL_STATE(26)] = 444,
  [SMALL_STATE(27)] = 452,
  [SMALL_STATE(28)] = 460,
  [SMALL_STATE(29)] = 470,
  [SMALL_STATE(30)] = 478,
  [SMALL_STATE(31)] = 486,
  [SMALL_STATE(32)] = 496,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 522,
  [SMALL_STATE(35)] = 535,
  [SMALL_STATE(36)] = 545,
  [SMALL_STATE(37)] = 555,
  [SMALL_STATE(38)] = 565,
  [SMALL_STATE(39)] = 572,
  [SMALL_STATE(40)] = 579,
  [SMALL_STATE(41)] = 586,
  [SMALL_STATE(42)] = 593,
  [SMALL_STATE(43)] = 600,
  [SMALL_STATE(44)] = 607,
  [SMALL_STATE(45)] = 614,
  [SMALL_STATE(46)] = 619,
  [SMALL_STATE(47)] = 626,
  [SMALL_STATE(48)] = 633,
  [SMALL_STATE(49)] = 640,
  [SMALL_STATE(50)] = 645,
  [SMALL_STATE(51)] = 652,
  [SMALL_STATE(52)] = 656,
  [SMALL_STATE(53)] = 660,
  [SMALL_STATE(54)] = 664,
  [SMALL_STATE(55)] = 668,
  [SMALL_STATE(56)] = 672,
  [SMALL_STATE(57)] = 676,
  [SMALL_STATE(58)] = 680,
  [SMALL_STATE(59)] = 684,
  [SMALL_STATE(60)] = 688,
  [SMALL_STATE(61)] = 692,
  [SMALL_STATE(62)] = 696,
  [SMALL_STATE(63)] = 700,
  [SMALL_STATE(64)] = 704,
  [SMALL_STATE(65)] = 708,
  [SMALL_STATE(66)] = 712,
  [SMALL_STATE(67)] = 716,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_type_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_type_list_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_type_list_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_type_list, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 4, 0, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 5, 0, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 3, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_type_list, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_type_list, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
