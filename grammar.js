module.exports = grammar({
  name: "methodb",

  // skip ordinary whitespace
  extras: ($) => [/\s+/],

  // the entry point: a flat stream of tokens
  rules: {
    source_file: ($) => repeat1($._token),

    _token: ($) =>
      choice(
        $.keyword,
        $.assignment,
        $.operator,
        $.substitution,
        $.built_in_function,
        $.built_in_constant,
        $.defined_set,
        $.boolean,
        $.number,
        $.bad_identifier,
        $.machine_name,
        $.identifier,
        $.string,
        $.comment,
      ),

    ///////////////////////////////////////
    // 1) KEYWORDS
    ///////////////////////////////////////
    keyword: ($) =>
      token(
        choice(
          "MACHINE",
          "IMPLEMENTATION",
          "REFINEMENT",
          "REFINES",
          "IMPORTS",
          "DEFINITIONS",
          "SEES",
          "USES",
          "INCLUDES",
          "EXTENDS",
          "PROMOTES",
          "CONSTRAINTS",
          "SETS",
          "VARIABLES",
          "CONCRETE_VARIABLES",
          "CONSTANTS",
          "PROPERTIES",
          "INITIALISATION",
          "OPERATIONS",
          "PRE",
          "IF",
          "THEN",
          "ELSIF",
          "ELSE",
          "END",
          "CHOICE",
          "OR",
          "SELECT",
          "WHEN",
          "CASE",
          "OF",
          "EITHER",
          "VAR",
          "IN",
          "ANY",
          "WHERE",
          "LET",
          "BE",
          "WHILE",
          "DO",
          "VARIANT",
          "INVARIANT",
          "ASSERTIONS",
          "BEGIN",
          "<--",
          "skip",
        ),
      ),

    // the special ':=' operator as a keyword
    assignment: ($) => token(":" + "="),

    ///////////////////////////////////////
    // 2) OPERATORS
    ///////////////////////////////////////
    operator: ($) =>
      token(
        choice(
          "&",
          "=>",
          "<=>",
          "!",
          "#",
          "=",
          "/=",
          "|",
          "/",
          "/\\",
          "-",
          "|->",
          "*",
          ".",
          ":",
          "/:",
          "<:",
          "/<:",
          "<<:",
          "/<<:",
          "+",
          "/",
          "..",
          ">",
          "<",
          ">=",
          "<=",
          "<->",
          ";",
          "<|",
          "<<|",
          "|>",
          "|>>",
          "~",
          "<+",
          "+>",
          "><",
          "||",
          "+->",
          "-->",
          ">+>",
          ">->",
          "+->>",
          ">->>",
          "%",
          "^",
          "->",
          "<-",
          "/\\|\\\\",
          "\\\\|/",
          "==>",
          "[]",
          "@",
        ),
      ),

    ///////////////////////////////////////
    // 3) SUBSTITUTION
    ///////////////////////////////////////
    substitution: ($) => token(seq("[", /[A-Za-z_][A-Za-z0-9_]*/, "]")),

    ///////////////////////////////////////
    // 4) BUILT-IN FUNCTIONS & CONSTS
    ///////////////////////////////////////
    built_in_function: ($) =>
      token(
        choice(
          "card",
          "union",
          "inter",
          "UNION",
          "INTER",
          "min",
          "max",
          "SIGMA",
          "PI",
          "dom",
          "ran",
          "id",
          "iterate",
          "closure",
          "prj1",
          "prj2",
          "size",
          "rev",
          "first",
          "last",
          "tail",
          "front",
          "conc",
        ),
      ),

    built_in_constant: ($) =>
      token(
        choice(
          "POW",
          "POW1",
          "FIN",
          "FIN1",
          "seq",
          "seq1",
          "iseq",
          "perm",
          "bool",
          "struct",
          "rec",
        ),
      ),

    ///////////////////////////////////////
    // 5) DEFINED SETS
    ///////////////////////////////////////
    defined_set: ($) => token(choice("NAT1", "NAT", "INT")),

    ///////////////////////////////////////
    // 6) BOOLEANS
    ///////////////////////////////////////
    boolean: ($) => token(choice("TRUE", "FALSE", "MAXINT", "MININT")),

    ///////////////////////////////////////
    // 7) NUMBERS   ← NO more \b !
    ///////////////////////////////////////
    number: ($) => token(/[0-9]+/),

    ///////////////////////////////////////
    // 8) BAD SINGLE-CHAR IDENTIFIERS
    ///////////////////////////////////////
    bad_identifier: ($) => token(/[A-Za-z_]/),

    ///////////////////////////////////////
    // 9) MACHINE NAMES & NORMAL IDS
    ///////////////////////////////////////
    machine_name: ($) => token(/[A-Z][A-Za-z0-9_]*/),

    identifier: ($) =>
      token(
        choice(
          /[A-Z][A-Z0-9_]*/, // all-caps types
          /[a-z_][A-Za-z0-9_]*/, // normal variables
        ),
      ),

    ///////////////////////////////////////
    // 10) STRINGS
    ///////////////////////////////////////
    string: ($) =>
      token(
        seq(
          '"',
          repeat(
            choice(
              /\\./, // escape
              /[^"\\\n]+/, // unescaped text
            ),
          ),
          '"',
        ),
      ),

    ///////////////////////////////////////
    // 11) COMMENTS
    ///////////////////////////////////////
    comment: ($) =>
      token(
        choice(
          // /* block */
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
          // // line
          seq("//", /[^\n]*/),
        ),
      ),
  },
});
