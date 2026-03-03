// Write a program to multiply two matrices. we have to use our maths logic : matrix chapter our logic : multiplication of matrix.

#include <stdio.h>

int main() {
    int i, j, k;
    int a[3][3], b[3][3], product[3][3];

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

    // Step 3: Initialize product matrix with 0
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            product[i][j] = 0;
        }
    }

    // Step 4: Multiply matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Step 5: Print result
    printf("Product of two matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
