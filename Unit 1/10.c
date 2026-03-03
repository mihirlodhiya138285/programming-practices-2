// Write a program to subtract two matrices.

#include <stdio.h>

int main() {
    int i, j;
    int a[3][3], b[3][3], diff[3][3];

    // Step 1: Input first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 2: Input second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Step 3: Subtract both matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Step 4: Print result
    printf("Difference of two matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
