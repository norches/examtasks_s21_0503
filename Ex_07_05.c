#include <stdio.h>

// Задание:
// Если в строке есть пробелы, выводим NO. Иначе - YES

// Добавляем константу максимального размера строки (дано в условии задачи)
#define MAXSIZE 100

int main() {
    char symbol;
    int is_space_found = 0;

    // Получаем строку посимвольно, пока строка не закончилась или пробел не найден
    while (symbol != '\n' && !is_space_found) {
        scanf("%c", &symbol);
        if (symbol == ' ') {
            is_space_found = 1;
        }
    }

    // Используем тернарный оператор ("однострочный" if)
    char* result = is_space_found == 1 ? "NO" : "YES";
    printf("%s\n", result);

    return 0;
}