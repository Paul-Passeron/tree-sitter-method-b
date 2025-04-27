#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 5
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_keyword = 1,
  sym_assignment = 2,
  sym_operator = 3,
  sym_substitution = 4,
  sym_built_in_function = 5,
  sym_built_in_constant = 6,
  sym_defined_set = 7,
  sym_boolean = 8,
  sym_number = 9,
  sym_bad_identifier = 10,
  sym_machine_name = 11,
  sym_identifier = 12,
  sym_string = 13,
  sym_comment = 14,
  sym_source_file = 15,
  sym__token = 16,
  aux_sym_source_file_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [sym_assignment] = "assignment",
  [sym_operator] = "operator",
  [sym_substitution] = "substitution",
  [sym_built_in_function] = "built_in_function",
  [sym_built_in_constant] = "built_in_constant",
  [sym_defined_set] = "defined_set",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_bad_identifier] = "bad_identifier",
  [sym_machine_name] = "machine_name",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__token] = "_token",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword] = sym_keyword,
  [sym_assignment] = sym_assignment,
  [sym_operator] = sym_operator,
  [sym_substitution] = sym_substitution,
  [sym_built_in_function] = sym_built_in_function,
  [sym_built_in_constant] = sym_built_in_constant,
  [sym_defined_set] = sym_defined_set,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_bad_identifier] = sym_bad_identifier,
  [sym_machine_name] = sym_machine_name,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__token] = sym__token,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym_built_in_function] = {
    .visible = true,
    .named = true,
  },
  [sym_built_in_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_defined_set] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_bad_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 1,
        '+', 28,
        '-', 31,
        '.', 33,
        '/', 26,
        ':', 34,
        '<', 30,
        '=', 35,
        '>', 27,
        'A', 65,
        'B', 55,
        'C', 54,
        'D', 56,
        'E', 63,
        'F', 50,
        'I', 60,
        'L', 58,
        'M', 51,
        'N', 53,
        'O', 67,
        'P', 64,
        'R', 59,
        'S', 57,
        'T', 62,
        'U', 66,
        'V', 52,
        'W', 61,
        '[', 12,
        '\\', 10,
        'b', 78,
        'c', 68,
        'd', 79,
        'f', 76,
        'i', 73,
        'l', 69,
        'm', 70,
        'p', 75,
        'r', 71,
        's', 74,
        't', 72,
        'u', 77,
        '|', 32,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(80);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '|') ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == ':' ||
          lookahead == '|') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == 'I') ADVANCE(198);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == 'V') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'G') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'I') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_keyword);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_assignment);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '|') ADVANCE(25);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '|') ADVANCE(25);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '.') ADVANCE(25);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '|') ADVANCE(11);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_substitution);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_built_in_function);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_built_in_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_built_in_constant);
      if (lookahead == '1') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_built_in_constant);
      if (lookahead == '1') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_built_in_constant);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_built_in_constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_defined_set);
      if (lookahead == '1') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_defined_set);
      if (lookahead == 'E') ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_defined_set);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_boolean);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(168);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'A') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'A') ADVANCE(193);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'A') ADVANCE(187);
      if (lookahead == 'H') ADVANCE(169);
      if (lookahead == 'O') ADVANCE(157);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'E') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'E') ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'E') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'F') ADVANCE(22);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'H') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'H') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'I') ADVANCE(192);
      if (lookahead == 'L') ADVANCE(186);
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == 'X') ADVANCE(201);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(208);
      if (lookahead == 'R') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'N') ADVANCE(209);
      if (lookahead == 'S') ADVANCE(189);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'N') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'P') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'R') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'a') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'n') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'o') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_bad_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(184);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'A') ADVANCE(203);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'B') ADVANCE(145);
      if (lookahead == 'N') ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'B') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'C') ADVANCE(127);
      if (lookahead == 'X') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'C') ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'C') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'S') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'D') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'D') ADVANCE(185);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'D') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(154);
      if (lookahead == 'I') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(210);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(185);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(185);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(185);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(159);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(175);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(200);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'E') ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'F') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'F') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'F') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'G') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'H') ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'H') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(171);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(190);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(172);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'I') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'L') ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'L') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'L') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'L') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'L') ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'P') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'M') ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'M') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'M') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(185);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(196);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(194);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'N') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'O') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'O') ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'O') ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'O') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'O') ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'P') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'R') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'R') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'R') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'R') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'R') ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'R') ADVANCE(196);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'R') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'R') ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'R') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'R') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'S') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'S') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'S') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'S') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'S') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'S') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(185);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'T') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'U') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'U') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'V') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'W') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == 'Y') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_machine_name);
      if (lookahead == '_') ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_machine_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_machine_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(261);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_assignment] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym_substitution] = ACTIONS(1),
    [sym_built_in_function] = ACTIONS(1),
    [sym_built_in_constant] = ACTIONS(1),
    [sym_defined_set] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_bad_identifier] = ACTIONS(1),
    [sym_machine_name] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(4),
    [sym__token] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_keyword] = ACTIONS(3),
    [sym_assignment] = ACTIONS(5),
    [sym_operator] = ACTIONS(3),
    [sym_substitution] = ACTIONS(5),
    [sym_built_in_function] = ACTIONS(3),
    [sym_built_in_constant] = ACTIONS(3),
    [sym_defined_set] = ACTIONS(3),
    [sym_boolean] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_bad_identifier] = ACTIONS(3),
    [sym_machine_name] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
    [sym_string] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
  },
  [2] = {
    [sym__token] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_keyword] = ACTIONS(9),
    [sym_assignment] = ACTIONS(11),
    [sym_operator] = ACTIONS(9),
    [sym_substitution] = ACTIONS(11),
    [sym_built_in_function] = ACTIONS(9),
    [sym_built_in_constant] = ACTIONS(9),
    [sym_defined_set] = ACTIONS(9),
    [sym_boolean] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_bad_identifier] = ACTIONS(9),
    [sym_machine_name] = ACTIONS(9),
    [sym_identifier] = ACTIONS(9),
    [sym_string] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
  },
  [3] = {
    [sym__token] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_keyword] = ACTIONS(15),
    [sym_assignment] = ACTIONS(18),
    [sym_operator] = ACTIONS(15),
    [sym_substitution] = ACTIONS(18),
    [sym_built_in_function] = ACTIONS(15),
    [sym_built_in_constant] = ACTIONS(15),
    [sym_defined_set] = ACTIONS(15),
    [sym_boolean] = ACTIONS(15),
    [sym_number] = ACTIONS(18),
    [sym_bad_identifier] = ACTIONS(15),
    [sym_machine_name] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [sym_string] = ACTIONS(18),
    [sym_comment] = ACTIONS(18),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_methodb(void) {
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
