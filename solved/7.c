#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
4

Williams
50
Johnson
10
Batton
49
Parker
5
*/

// Найти студента с самым высшим баллом, вывести его имя, а потом если есть через запятую тех кто набрал
// столько же

/*
Williams, Parker
*/

int main() {
    int n = 4;
    // scanf("%d", &n);
    int scores[4] = {50, 10, 50, 5};
    char* names[4] = {"Williams", "Johnson", "Parker", "Batton"};

    int imax_score = scores[0];

    for (int i = 1; i < n; i++) {
        if (imax_score < scores[i]) {
            imax_score = scores[i];
        }
    }

    int printed_first = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] == imax_score) {
            if (printed_first != 0) {
                printf(", ");
            }
            printf("%s", names[i]);
            printed_first = 1;
        }
    }
    printf("\n");
    return 0;
}
