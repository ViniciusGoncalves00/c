#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#define INIT_SIZE 4

struct DynamicArray {
    int *array;
    int capacity;
    int length;
};

void InitDynamicArray(struct DynamicArray *dynamicArray);
int Capacity(struct DynamicArray *dynamicArray);
int Count(struct DynamicArray *dynamicArray);
void Add(struct DynamicArray *dynamicArray, int value);
void AddRange(struct DynamicArray *dynamicArray, int values[]);
void Clear(struct DynamicArray *dynamicArray);
void Contains(struct DynamicArray *dynamicArray, int value);
void Reverse(struct DynamicArray *dynamicArray);
void ForEach(struct DynamicArray *dynamicArray, void (*func)(int));
void InsertAt(struct DynamicArray *dynamicArray, int index);
void FreeDynamicArray(struct DynamicArray *dynamicArray);

#endif
