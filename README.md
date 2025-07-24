
# Terminal ANSI Color Tags for C++

## Version 0.1.0

This is copyware via the MIT license: Feel free to simply copy
`./colors.hpp` directly into your project without attribution or
citation.

## Testing

To test, run `make -C tests && ./tests./test.out`. It should
print a series of formatting "Hello, world!" strings.

## Usage

```cpp
#include <iostream>
#include "colors.hpp"

int main() {
  // This is the default on Linux, but it's good to make sure.
  // If this is false, no color will be written.
  Colors::allow_colors = true;

  // This will turn the following text red
  std::cout << Colors::red
            << "Hello, world!\n"
            << Colors::reset
            << "This text is not red.\n";
  // Always make sure to use Colors::reset when you are done

  return 0;
}
```

Tags cannot necessarily be combined. They should detect
non-color-supporting output streams (EG `std::ofstream`s) and
avoid them, but it's a good idea to avoid writing ANSI codes to
files anyway.
