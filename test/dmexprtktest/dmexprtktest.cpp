#include <iostream>
#include <exprtk.hpp>
#include <vector>

// 定义符号表和表达式解析器
typedef exprtk::symbol_table<double> symbol_table_t;
typedef exprtk::expression<double> expression_t;
typedef exprtk::parser<double> parser_t;

int main() {
    // 创建符号表
    symbol_table_t symbol_table;

    // 定义变量
    double x = 0;
    double y = 0;
    symbol_table.add_variable("x", x);
    symbol_table.add_variable("y", y);

    // 将符号表添加到表达式中
    expression_t expr;
    expr.register_symbol_table(symbol_table);
    expr.register_symbol_table(symbol_table);

    // 解析表达式
    parser_t parser;
    if (!parser.compile("x + y - 10", expr))
    {
        return -1;
    }

    // 输出结果
    auto results = expr.value();


    return 0;
}