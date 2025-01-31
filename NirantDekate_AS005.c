#include <stdio.h>

int numSpecial(int** mat, int matSize, int* matColSize) {
    int rSum[matSize], cSum[*matColSize];
    
    for (int i = 0; i < matSize; i++) rSum[i] = 0;
    for (int j = 0; j < *matColSize; j++) cSum[j] = 0;
    
    for (int i = 0; i < matSize; i++) {
        for (int j = 0; j < *matColSize; j++) {
            if (mat[i][j] == 1) {
                rSum[i]++;
                cSum[j]++;
            }
        }
    }

    int count = 0;
    
    for (int i = 0; i < matSize; i++) {
        for (int j = 0; j < *matColSize; j++) {
            if (mat[i][j] == 1 && rSum[i] == 1 && cSum[j] == 1) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int mat1[3][3] = {{1,0,0},{0,0,1},{1,0,0}};
    int* ptr1[3] = {mat1[0], mat1[1], mat1[2]};
    int matSize1 = 3, matColSize1 = 3;
    printf("%d\n", numSpecial(ptr1, matSize1, &matColSize1));  // Removed the text for mat1
    
    int mat2[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    int* ptr2[3] = {mat2[0], mat2[1], mat2[2]};
    int matSize2 = 3, matColSize2 = 3;
    printf("%d\n", numSpecial(ptr2, matSize2, &matColSize2));  // Removed the text for mat2
    
    return 0;
}
