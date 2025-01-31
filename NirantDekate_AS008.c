#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* restoreString(const char* s, const int* indices, int n) {
    char* result = (char*)malloc((n + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        result[indices[i]] = s[i];
    }

    result[n] = '\0';

    return result;
}

void printResult(char* result) {
    if (result != NULL) {
        printf("%s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed!\n");
    }
}

int main() {
    const char* s1 = "codeleet";
    int indices1[] = {4, 5, 6, 7, 0, 2, 1, 3};
    int n1 = 8;

    char* result1 = restoreString(s1, indices1, n1);
    printResult(result1);

    const char* s2 = "abc";
    int indices2[] = {0, 1, 2};
    int n2 = 3;

    char* result2 = restoreString(s2, indices2, n2);
    printResult(result2);

    return 0;
}
