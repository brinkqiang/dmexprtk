/*
 **************************************************************
 *         C++ Mathematical Expression Toolkit Library        *
 *                                                            *
 * Examples and Unit-Tests                                    *
 * Author: Arash Partow (1999-2021)                           *
 * URL: http://www.partow.net/programming/exprtk/index.html   *
 *                                                            *
 * Copyright notice:                                          *
 * Free use of the Mathematical Expression Toolkit Library is *
 * permitted under the guidelines and in accordance with the  *
 * most current version of the MIT License.                   *
 * http://www.opensource.org/licenses/MIT                     *
 *                                                            *
 **************************************************************
*/

#include <cmath>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <fstream>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

#include "exprtk.hpp"

int main()
{
   double x = 0;
   double y = 0;

   exprtk::symbol_table<double> symbol_table;
   symbol_table.add_constants();
   symbol_table.add_variable("x", x);
   symbol_table.add_variable("y", y);

   exprtk::parser<double> parser;

   exprtk::expression<double> expression;
   expression.register_symbol_table(symbol_table);

   if (!parser.compile("if(x > y)", expression))
   {
      return -1;
   }

   return 0;
}
