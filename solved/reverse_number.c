#include <stdio.h>

// Инпут 4321 ///   78964
// Аутпут 1234 ///  46987

int main() {
    int number;
    char trash;

    if (scanf("%d%c", &number, &trash) == 2 && trash == '\n') {
        if (number < 0) {
            // Если число отрицательное - делаем из него положительное и выводим "-" (минус) в консоль
            printf("-");
            number *= -1;
        }

        while (number > 0) {
            int digit = number % 10;
            printf("%d", digit);
            // Получаем цифру в конце, получая остаток от деления на 10.
            // Н-р 123 % 10 = 3, 12 % 10 = 2, 1 % 10 = 1
            number /= 10;
        }
    }

    return 0;
}