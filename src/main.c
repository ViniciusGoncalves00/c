#include <stdio.h>
#include "functions.h"

int main() {
    int array_size;

    printf("Digit the array size:");
    scanf("%d", &array_size);

    int array[array_size];

    for (int i = 0; i < array_size; i++) {
        array[i] = 0;
    }

    printf("Digit %d elements of array:\n", array_size);
    for (int i = 0; i < array_size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    if (array_size > 0) {
        for (int i = 0; i < array_size; i++) {
            printf("Value in index 0: %d\n", array[i]);
        }
    }
    else {
        printf("Empty array.\n");
    }

    return 0;
}