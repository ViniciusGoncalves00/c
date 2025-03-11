#include "dynamic_array.h"
#include <stdio.h>
#include <stdlib.h>

void InitDynamicArray(struct DynamicArray *dynamicArray) {
    dynamicArray->length = 0;
    dynamicArray->capacity = INIT_SIZE;
    dynamicArray->array = (int*)malloc(dynamicArray->capacity * sizeof(int));
    
    if (dynamicArray->array == NULL) {
        printf("Failed to alocate memory.\n");
        exit(1);
    }
}

int Capacity(struct DynamicArray *dynamicArray) {
    return dynamicArray->capacity;
}

int Count(struct DynamicArray *dynamicArray) {
    return dynamicArray->length;
}

void Add(struct DynamicArray *dynamicArray, int value) {
    if(dynamicArray->length + 1 > dynamicArray->capacity) {
        dynamicArray->capacity *= 2;
        dynamicArray->array = (int*)realloc(dynamicArray->array, dynamicArray->capacity * sizeof(int));

        if (dynamicArray->array == NULL) {
            printf("Failed to alocate memory.\n");
            exit(1);
        }
    }

    dynamicArray->array[dynamicArray->length] = value;
    dynamicArray->length++;
}