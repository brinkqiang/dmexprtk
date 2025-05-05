#include <iostream>
#include <exprtk.hpp>
#include <vector>

// ������ű�ͱ��ʽ������
typedef exprtk::symbol_table<double> symbol_table_t;
typedef exprtk::expression<double> expression_t;
typedef exprtk::parser<double> parser_t;

int main() {
    // �������ű�
    symbol_table_t symbol_table;

    // �������
    double x = 0;
    double y = 0;
    symbol_table.add_variable("x", x);
    symbol_table.add_variable("y", y);

    // �����ű���ӵ����ʽ��
    expression_t expr;
    expr.register_symbol_table(symbol_table);
    expr.register_symbol_table(symbol_table);

    // �������ʽ
    parser_t parser;
    if (!parser.compile("x + y - 10", expr))
    {
        return -1;
    }

    // ������
    auto results = expr.value();


    return 0;
}