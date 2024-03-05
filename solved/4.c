#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// bubble sort
void sort(int* array, int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}

void print_array(int* array, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if (i < length - 1) printf(" ");
    }
}

int main() {
    int* array = (int*)malloc(1 * sizeof(int));
    int current;
    int index = 0;
    char c;
    while (scanf("%d%c", &current, &c) == 2 && c != '\n') {
        array[index] = current;
        array = (int*)realloc(array, (index + 1) * sizeof(int));
        index++;
    }
    array[index] = current;

    sort(array, index + 1);

    print_array(array, index + 1);
}