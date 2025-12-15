#include <iostream>
#include <stdexcept>

int add(int a, int b) {
    return a + b;
}

double divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Деление на ноль невозможно");
    }
    return static_cast<double>(a) / b;
}

int main() {
    std::cout << add(2, 3) << std::endl;
    return 0;
}


