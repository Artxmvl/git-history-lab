#include <iostream>  // Для std::cout и std::endl

// Функция сложения: возвращает сумму двух целых чисел
int add(int a, int b) {
    return a + b;
}

int main() {
    // Выводим результат сложения 2 + 3 в консоль
    std::cout << add(2, 3) << std::endl;
    // Успешное завершение программы
    return 0;
}
