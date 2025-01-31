#include <stdio.h>

int removeElement(int A[], int n, int elem) {
    int i, j, len;
    len = n;
    i = 0, j = n - 1;
    while (i < len) {
        if (A[i] == elem) {
            int t = A[j];
            A[j] = A[i];
            A[i] = t;
            len--;
            j--;
        }
        else {
            i++;
        }
    }
    return len;
}

void printArray(int A[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int nums1[] = {3, 2, 2, 3};
    int n1 = 4;
    int val1 = 3;
    
    int nums2[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int n2 = 8;
    int val2 = 2;

    int newLength1 = removeElement(nums1, n1, val1);
    printf("%d, nums = ", newLength1);
    printArray(nums1, newLength1);
    printf("\n");

    int newLength2 = removeElement(nums2, n2, val2);
    printf("%d, nums = ", newLength2);
    printArray(nums2, newLength2);
    printf("\n");

    return 0;
}
