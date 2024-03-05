#include <stdio.h>

int main() {
    int number, max_digit = 0;
    char trash;

    if (scanf("%d%c", &number, &trash) == 2 && trash == '\n') {
        if (number < 0) number *= -1;

        // Получаем цифру, используя остаток от деления числа на 10
        for (int digit = number % 10; number > 0; number /= 10) {
            if (max_digit < digit) max_digit = digit;
        }

        // Второй вариант первого решения, используя цикл while вместо for

        // while(number > 0) {
        //     int digit = number % 10;
        //     number = number / 10;
        //     if (max_digit < digit) max_digit = digit;
        // }

        printf("%d", max_digit);
    } else {
        printf("n/a");
    }

    // Второй вариант решения.
    // Он позволяет не ограничиваться размерами int (4 байта - от 2147483647 до -2147483647)

    char symbol;
    int count = 0;
    int max_digit = 0, is_valid = 1;

    while (is_valid) {
        scanf("%c", &symbol);
        if (symbol >= '0' && symbol <= '9') {
            // Проверка, является ли символ числом
            int digit = symbol - '0';
            if (max_digit < digit) max_digit = digit;
        } else if (symbol == '\0' || symbol == '\n') {
            // Проверка, закончилась ли строка
            break;
        } else if (symbol == '-' && count == 0) {
            // Проверка, правильно ли поставлен минус у отрицательных чисел
            continue;
        } else {
            // Иначе - ввод не правильный
            is_valid = 0;
            printf("n/a");
            break;
        }

        count++;
    }

    if (is_valid == 1) printf("%d", max_digit);

    return 0;
}