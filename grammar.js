module.exports = grammar({
    name: 'while',

    rules: {
        program: $ => seq($._stmt, repeat(seq(';', $._stmt)), optional(';')),
        _stmt: $ => choice($.while, $.assign),
        while: $ => seq('WHILE', $.var, '!=', '0', 'DO', $.program, 'END'),
        assign: $ => seq($.var, ':=', $.var, optional(seq(choice('+', '-'), choice('0', '1')))),

        var: $ => /x0|x[1-9][0-9]*/,
    },
})
