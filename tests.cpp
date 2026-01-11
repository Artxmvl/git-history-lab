#include <cassert>   // Подключаем assert для проверок в тестах
#include <iostream> 

// Объявление функции сложения, реализована в файле calculator.cpp
int add(int a, int b);

int main() {
    // Проверяем, что 2 + 3 даёт 5
    assert(add(2, 3) == 5);

    // Проверяем, что -1 + 1 даёт 0
    assert(add(-1, 1) == 0);

    // Если все проверки прошли, выводим сообщение об успехе
    std::cout << "Tests passed!" << std::endl;

    
    return 0;
}
