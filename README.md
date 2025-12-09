#include <stdio.h>
#include "matrix_op.h"  // Leader 整合的 header

int main() {

Matrix3x3 A = {{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }};

Matrix3x3 B = {{
        {9,8,7},
        {6,5,4},
        {3,2,1}
    }};

 printf("=== BASIC OPERATIONS ===\n");
 printMatrix(add(A, B));
 printMatrix(subtract(A, B));
 printMatrix(elementwise_multiply(A, B));

printf("\n=== LINEAR OPERATIONS ===\n");
printMatrix(matmul(A, B));
printMatrix(transpose(A));

printf("\n=== ADVANCED OPERATIONS ===\n");
printf("Determinant of A = %.2f\n", determinant(A));
printMatrix(adjoint(A));

printf("\n=== INVERSE OPERATIONS ===\n");
    if (isInvertible(A)) {
        printMatrix(inverse(A));
    } else {
        printf("Matrix A is NOT invertible.\n");
    }

 return 0;
}

