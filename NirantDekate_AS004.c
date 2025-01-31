#include <stdio.h>

int majorityElement(int* nums, int numsSize) { 
    int count = 0, candidate = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        count += (nums[i] == candidate) ? 1 : -1; 
    }
    return candidate;
}

int main() {
    // Example 1
    int nums1[] = {3, 2, 3};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int result1 = majorityElement(nums1, numsSize1);
    printf("%d\n", result1); // Output: 3
    
    // Example 2
    int nums2[] = {2, 2, 1, 1, 1, 2, 2};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int result2 = majorityElement(nums2, numsSize2);
    printf("%d\n", result2); // Output: 2
    
    return 0;
}
