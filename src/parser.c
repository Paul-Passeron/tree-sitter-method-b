#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym__line_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym__block_comment_token1 = 4,
  anon_sym_SLASH = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_identifier = 12,
  sym_source_file = 13,
  sym_statement = 14,
  sym_comment = 15,
  sym__line_comment = 16,
  sym__block_comment = 17,
  sym_expression = 18,
  sym_block = 19,
  sym_array = 20,
  sym_parenthesized_expression = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_array_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__line_comment_token1] = "_line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym__block_comment_token1] = "_block_comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_comment] = "comment",
  [sym__line_comment] = "_line_comment",
  [sym__block_comment] = "_block_comment",
  [sym_expression] = "expression",
  [sym_block] = "block",
  [sym_array] = "array",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__line_comment_token1] = aux_sym__line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym__block_comment_token1] = aux_sym__block_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_comment] = sym_comment,
  [sym__line_comment] = sym__line_comment,
  [sym__block_comment] = sym__block_comment,
  [sym_expression] = sym_expression,
  [sym_block] = sym_block,
  [sym_array] = sym_array,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
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
  [27] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_statement] = STATE(15),
    [sym_comment] = STATE(1),
    [sym__line_comment] = STATE(20),
    [sym__block_comment] = STATE(20),
    [sym_expression] = STATE(17),
    [sym_block] = STATE(6),
    [sym_array] = STATE(6),
    [sym_parenthesized_expression] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_statement] = STATE(15),
    [sym_comment] = STATE(2),
    [sym__line_comment] = STATE(20),
    [sym__block_comment] = STATE(20),
    [sym_expression] = STATE(17),
    [sym_block] = STATE(6),
    [sym_array] = STATE(6),
    [sym_parenthesized_expression] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [anon_sym_SLASH_STAR] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_identifier] = ACTIONS(36),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [3] = {
    [sym_statement] = STATE(15),
    [sym_comment] = STATE(3),
    [sym__line_comment] = STATE(20),
    [sym__block_comment] = STATE(20),
    [sym_expression] = STATE(17),
    [sym_block] = STATE(6),
    [sym_array] = STATE(6),
    [sym_parenthesized_expression] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_statement] = STATE(15),
    [sym_comment] = STATE(4),
    [sym__line_comment] = STATE(20),
    [sym__block_comment] = STATE(20),
    [sym_expression] = STATE(17),
    [sym_block] = STATE(6),
    [sym_array] = STATE(6),
    [sym_parenthesized_expression] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [5] = {
    [sym_statement] = STATE(15),
    [sym_comment] = STATE(5),
    [sym__line_comment] = STATE(20),
    [sym__block_comment] = STATE(20),
    [sym_expression] = STATE(17),
    [sym_block] = STATE(6),
    [sym_array] = STATE(6),
    [sym_parenthesized_expression] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_STAR] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [sym_identifier] = ACTIONS(45),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_block] = STATE(6),
    [sym_array] = STATE(6),
    [sym_parenthesized_expression] = STATE(6),
    [aux_sym_array_repeat1] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_SLASH_SLASH] = ACTIONS(49),
    [anon_sym_SLASH_STAR] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_SLASH_SLASH] = ACTIONS(51),
    [anon_sym_SLASH_STAR] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_block] = STATE(6),
    [sym_array] = STATE(6),
    [sym_parenthesized_expression] = STATE(6),
    [aux_sym_array_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym_identifier] = ACTIONS(64),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_block] = STATE(6),
    [sym_array] = STATE(6),
    [sym_parenthesized_expression] = STATE(6),
    [aux_sym_array_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_SLASH_SLASH] = ACTIONS(69),
    [anon_sym_SLASH_STAR] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_SLASH_SLASH] = ACTIONS(71),
    [anon_sym_SLASH_STAR] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_identifier] = ACTIONS(71),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_SLASH_SLASH] = ACTIONS(73),
    [anon_sym_SLASH_STAR] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_SLASH_SLASH] = ACTIONS(75),
    [anon_sym_SLASH_STAR] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [sym_expression] = STATE(25),
    [sym_block] = STATE(6),
    [sym_array] = STATE(6),
    [sym_parenthesized_expression] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_SLASH_SLASH] = ACTIONS(77),
    [anon_sym_SLASH_STAR] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym_identifier] = ACTIONS(77),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_SLASH_SLASH] = ACTIONS(79),
    [anon_sym_SLASH_STAR] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_SLASH_SLASH] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_identifier] = ACTIONS(81),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [sym__line_comment] = STATE(27),
    [sym__block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_SLASH_SLASH] = ACTIONS(83),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [sym_identifier] = ACTIONS(83),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(21), 1,
      sym_comment,
    STATE(24), 1,
      sym__block_comment,
    STATE(27), 1,
      sym__line_comment,
    ACTIONS(85), 5,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      sym_identifier,
  [23] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_comment,
    STATE(24), 1,
      sym__block_comment,
    STATE(27), 1,
      sym__line_comment,
  [42] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(89), 1,
      aux_sym__block_comment_token1,
    STATE(23), 1,
      sym_comment,
    STATE(24), 1,
      sym__block_comment,
    STATE(27), 1,
      sym__line_comment,
  [61] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(91), 1,
      aux_sym__line_comment_token1,
    STATE(27), 1,
      sym__line_comment,
    STATE(24), 2,
      sym_comment,
      sym__block_comment,
  [78] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym__block_comment,
    STATE(25), 1,
      sym_comment,
    STATE(27), 1,
      sym__line_comment,
  [97] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(95), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym__block_comment,
    STATE(26), 1,
      sym_comment,
    STATE(27), 1,
      sym__line_comment,
  [116] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 23,
  [SMALL_STATE(23)] = 42,
  [SMALL_STATE(24)] = 61,
  [SMALL_STATE(25)] = 78,
  [SMALL_STATE(26)] = 97,
  [SMALL_STATE(27)] = 116,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_comment, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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

TS_PUBLIC const TSLanguage *tree_sitter_methodB(void) {
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
