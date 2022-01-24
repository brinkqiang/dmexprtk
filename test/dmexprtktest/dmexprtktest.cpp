#include "dmformat.h"

#include "exprtk.hpp"

int main()
{
    double x = 1.618;
    double y = 2.618;

    exprtk::symbol_table<double> symbol_table;
    symbol_table.add_constants();
    symbol_table.add_variable("x", x);
    symbol_table.add_variable("y", y);

    exprtk::parser<double> parser;

    exprtk::expression<double> expression;
    expression.register_symbol_table(symbol_table);
    std::string strExp = "if((x > y), x^2, y^2)";
    if (!parser.compile(strExp, expression))
    {
        fmt::print("Parser Error: {}\tExpression: {}\n", parser.error(), strExp);
        return -1;
    }
    fmt::print("Parser Result: {}\tExpression: {}\n", expression.value(), strExp);
    return 0;
}
