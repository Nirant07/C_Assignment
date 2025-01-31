#include <stdio.h>
#include <stdlib.h>

int* numberOfLines(int* widths, int widthsSize, char * s, int* returnSize) {
    int *result = (int*) malloc(sizeof(int) * 2);
    int count = 1, remain = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        remain += widths[s[i] - 'a'];
        
        if (remain == 100) {
            count++;
            remain = 0;
        } 
        else if (remain > 100) {
            count++;
            remain = widths[s[i] - 'a'];
        }
    }
    
    *returnSize = 2;
    result[0] = count;
    result[1] = remain;
    
    return result;
}

int main() {
    // Example 1
    int widths1[26] = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    int returnSize1;
    int* result1 = numberOfLines(widths1, 26, s1, &returnSize1);
    printf("[%d,%d]\n", result1[0], result1[1]);
    free(result1);
    
    // Example 2
    int widths2[26] = {4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    char s2[] = "bbbcccdddaaa";
    int returnSize2;
    int* result2 = numberOfLines(widths2, 26, s2, &returnSize2);
    printf("[%d,%d]\n", result2[0], result2[1]);
    free(result2);
    
    return 0;
}
