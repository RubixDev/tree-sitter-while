#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_WHILE = 2,
  anon_sym_BANG_EQ = 3,
  anon_sym_0 = 4,
  anon_sym_DO = 5,
  anon_sym_END = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_1 = 10,
  sym_var = 11,
  sym_program = 12,
  sym__stmt = 13,
  sym_while = 14,
  sym_assign = 15,
  aux_sym_program_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_WHILE] = "WHILE",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_0] = "0",
  [anon_sym_DO] = "DO",
  [anon_sym_END] = "END",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_1] = "1",
  [sym_var] = "var",
  [sym_program] = "program",
  [sym__stmt] = "_stmt",
  [sym_while] = "while",
  [sym_assign] = "assign",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_DO] = anon_sym_DO,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_1] = anon_sym_1,
  [sym_var] = sym_var,
  [sym_program] = sym_program,
  [sym__stmt] = sym__stmt,
  [sym_while] = sym_while,
  [sym_assign] = sym_assign,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '!', 2,
        '+', 19,
        '-', 20,
        '0', 15,
        '1', 21,
        ':', 3,
        ';', 12,
        'D', 10,
        'E', 9,
        'W', 6,
        'x', 1,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'H') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'L') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_var);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_DO] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [sym_var] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(18),
    [sym__stmt] = STATE(7),
    [sym_while] = STATE(7),
    [sym_assign] = STATE(7),
    [anon_sym_WHILE] = ACTIONS(3),
    [sym_var] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_WHILE,
    ACTIONS(5), 1,
      sym_var,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_END,
    STATE(11), 3,
      sym__stmt,
      sym_while,
      sym_assign,
  [16] = 4,
    ACTIONS(3), 1,
      anon_sym_WHILE,
    ACTIONS(5), 1,
      sym_var,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_END,
    STATE(11), 3,
      sym__stmt,
      sym_while,
      sym_assign,
  [32] = 4,
    ACTIONS(3), 1,
      anon_sym_WHILE,
    ACTIONS(5), 1,
      sym_var,
    STATE(21), 1,
      sym_program,
    STATE(7), 3,
      sym__stmt,
      sym_while,
      sym_assign,
  [47] = 2,
    ACTIONS(13), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_END,
  [57] = 3,
    ACTIONS(3), 1,
      anon_sym_WHILE,
    ACTIONS(5), 1,
      sym_var,
    STATE(11), 3,
      sym__stmt,
      sym_while,
      sym_assign,
  [69] = 3,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_program_repeat1,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_END,
  [80] = 3,
    ACTIONS(19), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_program_repeat1,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_END,
  [91] = 3,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_program_repeat1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_END,
  [102] = 1,
    ACTIONS(26), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_END,
  [108] = 1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_END,
  [114] = 1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_END,
  [120] = 1,
    ACTIONS(30), 2,
      anon_sym_0,
      anon_sym_1,
  [125] = 1,
    ACTIONS(32), 1,
      anon_sym_COLON_EQ,
  [129] = 1,
    ACTIONS(34), 1,
      sym_var,
  [133] = 1,
    ACTIONS(36), 1,
      anon_sym_BANG_EQ,
  [137] = 1,
    ACTIONS(38), 1,
      sym_var,
  [141] = 1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
  [145] = 1,
    ACTIONS(42), 1,
      anon_sym_0,
  [149] = 1,
    ACTIONS(44), 1,
      anon_sym_DO,
  [153] = 1,
    ACTIONS(46), 1,
      anon_sym_END,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 108,
  [SMALL_STATE(12)] = 114,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 125,
  [SMALL_STATE(15)] = 129,
  [SMALL_STATE(16)] = 133,
  [SMALL_STATE(17)] = 137,
  [SMALL_STATE(18)] = 141,
  [SMALL_STATE(19)] = 145,
  [SMALL_STATE(20)] = 149,
  [SMALL_STATE(21)] = 153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 5, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 7, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [40] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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

TS_PUBLIC const TSLanguage *tree_sitter_while(void) {
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
