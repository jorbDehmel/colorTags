/**
 * @brief Tests the colors.hpp file
 */

#include "../colors.hpp"
#include <iostream>

int main() {
  for (const bool &allow : {false, true}) {
    Colors::allow_colors = allow;
    for (const auto &tag :
         {Colors::red, Colors::yellow, Colors::green,
          Colors::blue, Colors::violet, Colors::red_bold,
          Colors::yellow_bold, Colors::green_bold,
          Colors::blue_bold, Colors::violet_bold,
          Colors::italics, Colors::bold, Colors::underscore,
          Colors::strikeout}) {
      std::cout << tag << "Hello, world!\n" << Colors::reset;
    }
  }
  return 0;
}
