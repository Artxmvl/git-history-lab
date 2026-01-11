// Класс для тестирования функции сложения
public class Calculator {

    // Функция сложения: возвращает сумму двух целых чисел
    public static int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        // Проверяем, что 2 + 3 даёт 5
        assert add(2, 3) == 5 : "2 + 3 должно быть 5";

        // Проверяем, что -1 + 1 даёт 0
        assert add(-1, 1) == 0 : "-1 + 1 должно быть 0";

        // Если все проверки прошли, выводим сообщение об успехе
        System.out.println("Tests passed!");
    }
}
