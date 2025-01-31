#include <stdio.h>
#include <stdlib.h>

char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    char** result = (char**)malloc(numsSize * sizeof(char*));
    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        long long beg = nums[i];
        while (i + 1 < numsSize && nums[i + 1] == nums[i] + 1) {
            i++;
        }
        long long last = nums[i];
        result[*returnSize] = (char*)malloc(40 * sizeof(char));

        if (beg == last) {
            sprintf(result[*returnSize], "%d", (int)beg);
        } else {
            sprintf(result[*returnSize], "%d->%d", (int)beg, (int)last);
        }
        (*returnSize)++;
    }

    return result;
}

void printRanges(char** ranges, int returnSize) {
    printf("[");
    for (int i = 0; i < returnSize; i++) {
        printf("\"%s\"", ranges[i]);
        if (i < returnSize - 1) printf(", ");
        free(ranges[i]);
    }
    printf("]\n");
}

int main() {
    int nums1[] = {0, 1, 2, 4, 5, 7};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int returnSize1;
    char** result1 = summaryRanges(nums1, size1, &returnSize1);
    printRanges(result1, returnSize1);
    free(result1);

    int nums2[] = {0, 2, 3, 4, 6, 8, 9};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int returnSize2;
    char** result2 = summaryRanges(nums2, size2, &returnSize2);
    printRanges(result2, returnSize2);
    free(result2);

    return 0;
}
