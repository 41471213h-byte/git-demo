#include <stdio.h>
#include "matrix_op.h"

int main() {
    Matrix3x3 A = {{ {1,2,3},{4,5,6},{7,8,9} }};
    Matrix3x3 B = {{ {9,8,7},{6,5,4},{3,2,1} }};

    printf("=== BASIC ===\n");
    printMatrix(add(A,B));

    printf("=== LINEAR ===\n");
    printMatrix(matmul(A,B));

    printf("=== ADVANCED ===\n");
    printf("Determinant(A) = %.2f\n", determinant(A));

    printf("=== INVERSE ===\n");
    if (isInvertible(A))
        printMatrix(inverse(A));
    else
        printf("A is not invertible.\n");

    return 0;
}
