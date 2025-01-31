#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int xor = nums[0];
    for (int i = 1; i < numsSize; i++) {
        xor ^= nums[i];
    }
    return xor;
}

int main() {
    int nums1[] = {2, 2, 1};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("%d\n", singleNumber(nums1, numsSize1));  // 1

    int nums2[] = {4, 1, 2, 1, 2};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("%d\n", singleNumber(nums2, numsSize2));  // 4

    int nums3[] = {1};
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("%d\n", singleNumber(nums3, numsSize3));  // 1

    return 0;
}
