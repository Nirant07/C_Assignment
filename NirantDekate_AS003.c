#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    int* newDigi = (int*)malloc((digitsSize + 1) * sizeof(int));
    newDigi[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        newDigi[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return newDigi;
}

void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(",");
    }
    printf("]\n");
}

int main() {
    int digits1[] = {1, 2, 3};
    int size1 = sizeof(digits1) / sizeof(digits1[0]);
    int returnSize1;
    int* result1 = plusOne(digits1, size1, &returnSize1);
    printArray(result1, returnSize1);

    int digits2[] = {4, 3, 2, 1};
    int size2 = sizeof(digits2) / sizeof(digits2[0]);
    int returnSize2;
    int* result2 = plusOne(digits2, size2, &returnSize2);
    printArray(result2, returnSize2);

    int digits3[] = {9};
    int size3 = sizeof(digits3) / sizeof(digits3[0]);
    int returnSize3;
    int* result3 = plusOne(digits3, size3, &returnSize3);
    printArray(result3, returnSize3);

    return 0;
}
