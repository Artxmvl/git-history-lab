#include <cassert>
#include <iostream>

int add(int a, int b); // объявление из calculator.cpp

int main() {
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    std::cout << "Tests passed!" << std::endl;
    return 0;
}
