#include <stdio.h>
#include <stdlib.h>

int countGoodTriplets(int* arr, int arrSize, int a, int b, int c) {
    int count = 0;
    for (int i = 0; i < arrSize - 2; i++) {
        for (int j = i + 1; j < arrSize - 1; j++) {
            if (abs(arr[i] - arr[j]) <= a) {
                for (int k = j + 1; k < arrSize; k++) {
                    if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                        count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int arr1[] = {3, 0, 1, 1, 9, 7};
    int a1 = 7, b1 = 2, c1 = 3;
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", countGoodTriplets(arr1, size1, a1, b1, c1));

    int arr2[] = {1, 1, 2, 2, 3};
    int a2 = 0, b2 = 0, c2 = 1;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", countGoodTriplets(arr2, size2, a2, b2, c2));

    return 0;
}
