


package org.example;  
public class calculator {
//обычные функции в обычном калькуляторе
    // Функция сложения: возвращает сумму двух целых чисел
    public static int add(int a, int b) {
        return a + b;
    }

    // Функция вычитания: возвращает разность двух целых чисел (a - b)
    public static int subtract(int a, int b) {
        return a - b;
    }

    // Функция умножения: возвращает произведение двух целых чисел
    public static int multiply(int a, int b) {
        return a * b;
    }

    // Функция деления: делит a на b и возвращает результат как число с плавающей точкой
    // Если b == 0, выводит сообщение об ошибке и возвращает 0.0
    public static double divide(int a, int b) {
        if (b == 0) {
            System.out.println("Ошибка: деление на ноль невозможно");
            return 0.0;
        }
        return (double) a / b;
    }

    
    public static void main(String[] args) {
        // Небольшие примеры использования функций калькулятора
        System.out.println("2 + 3 = " + add(2, 3));
        System.out.println("5 - 2 = " + subtract(5, 2));
        System.out.println("3 * 4 = " + multiply(3, 4));
        System.out.println("10 / 2 = " + divide(10, 2))
    }
}
