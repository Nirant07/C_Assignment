#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxCount = 0, currentCount = 0; 
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        } else {
            currentCount = 0;
        }
    }
    return maxCount;
}

int main() {
    int nums1[] = {1, 1, 0, 1, 1, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("%d\n", findMaxConsecutiveOnes(nums1, size1));

    int nums2[] = {1, 0, 1, 1, 0, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("%d\n", findMaxConsecutiveOnes(nums2, size2));

    return 0;
}
