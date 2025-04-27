module.exports = grammar({
    name: "methodB",

    extras: ($) => [/\s/, $.comment],

    conflicts: ($) => [],

    rules: {
        source_file: ($) => repeat($.statement),

        statement: ($) => choice($.comment, $.expression),

        comment: ($) => choice($._line_comment, $._block_comment),

        _line_comment: ($) => seq("//", /.*/),
        _block_comment: ($) => seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),

        expression: ($) =>
            prec.left(
                choice(
                    $.identifier,
                    $.block,
                    $.array,
                    $.parenthesized_expression,
                ),
            ),

        block: ($) => seq("{", optional(repeat($.statement)), "}"),
        array: ($) => seq("[", optional(repeat($.expression)), "]"),
        parenthesized_expression: ($) => seq("(", $.expression, ")"),

        identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    },
});
