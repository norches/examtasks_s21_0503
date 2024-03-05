#include <stdio.h>

// Если С строго посередине A и B вернуть 1, иначе 0. Не используя if else

int main() {
    int number, top, bottom;
    char trash;

    if (scanf("%d %d %d%c", &bottom, &top, &number, &trash) == 4 && trash == '\n') {
        int less_than_top = top > number;
        int more_than_bottom = number > bottom;

        int result = less_than_top && more_than_bottom;
        printf("%d\n", result);
    }

    return 0;
}