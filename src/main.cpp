#include <iostream>
#include "my_library.hpp"

int main() {
    MyLibrary myLib;
    std::cout << "3 + 4 = " << myLib.add(3, 4) << std::endl;
    return 0;
}