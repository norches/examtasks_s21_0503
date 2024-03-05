#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// INPUT: This is my Tea my
// OUTPUT: This is Tea

int main() {
    char* input = "This is my Tea my";
    char* token = strtok(input, " ");

    // Создаем матрицу типа поинтер -> строка
    char** matrix = calloc(1, sizeof(char*));
    int tokens_amount = 0;

    while (token != NULL) {
        token = strtok(NULL, " ");
        matrix[tokens_amount] = calloc(1, sizeof(token));
        tokens_amount++;
    }
}