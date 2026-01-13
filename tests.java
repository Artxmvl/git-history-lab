// Класс для тестирования функции сложения
public class Calculator {

    // Функция сложения: возвращает сумму двух целых чисел
    public static int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        // Проверяем, что 5 + 3 даёт 8
        assert add(5, 3) == 8 : "5 + 3 должно быть 8";

        // Проверяем, что -8 + 8 даёт 0
        assert add(-8, 8) == 0 : "-8 + 8 должно быть 0";

        // Если все проверки прошли, выводим сообщение об успехе
        System.out.println("Tests passed!");
    }
}
