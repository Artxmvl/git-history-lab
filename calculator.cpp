#include <iostream>    

using namespace std;    

// Функция сложения: возвращает сумму двух целых чисел
int add(int a, int b) {
    return a + b;
}

// Функция вычитания: возвращает разность двух целых чисел (a - b)
int subtract(int a, int b) {
    return a - b;
}

// Функция умножения: возвращает произведение двух целых чисел
int multiply(int a, int b) {
    return a * b;
}

// Функция деления: делит a на b и возвращает результат как число с плавающей точкой
// Если b == 0, выводит сообщение об ошибке и возвращает 0
double divide(int a, int b) {
    if (b == 0) {
        cout << "Ошибка: деление на ноль невозможно" << endl;
        return 0.0; 
    }
    return static_cast<double>(a) / b;
}



int main() {
    // Небольшие примеры использования функций калькулятора
    cout << "2 + 3 = " << add(2, 3) << endl;
    cout << "5 - 2 = " << subtract(5, 2) << endl;
    cout << "3 * 4 = " << multiply(3, 4) << endl;
    cout << "10 / 2 = " << divide(10, 2) << endl;

    // Пример деления на ноль 
    cout << "10 / 0 = " << divide(10, 0) << endl;

    return 0;
}


