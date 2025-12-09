// basic.c - Implementation of Basic 3x3 Matrix Operations
// Author: Horace

#include <stdio.h>
#include "basic.h"

// -------------------------
// Matrix Addition
// -------------------------
Matrix3x3 add(Matrix3x3 A, Matrix3x3 B) {
    Matrix3x3 result;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result.m[i][j] = A.m[i][j] + B.m[i][j];
        }
    }
    return result;
}

// -------------------------
// Matrix Subtraction
// -------------------------
Matrix3x3 subtract(Matrix3x3 A, Matrix3x3 B) {
    Matrix3x3 result;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result.m[i][j] = A.m[i][j] - B.m[i][j];
        }
    }
    return result;
}

// -------------------------
// Element-wise Multiplication (逐元素相乘)
// -------------------------
Matrix3x3 elementwise_multiply(Matrix3x3 A, Matrix3x3 B) {
    Matrix3x3 result;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result.m[i][j] = A.m[i][j] * B.m[i][j];
        }
    }
    return result;
}

// -------------------------
// Utility: Print Matrix
// -------------------------
void printMatrix(Matrix3x3 A) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%.2f ", A.m[i][j]);
        }
        printf("\n");
    }
}
