#include <stdio.h>

#define N 3   // 矩陣大小 3x3

// --- 矩陣相乘 ---
void multiplyMatrix(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// --- 矩陣轉置 ---
void transposeMatrix(int A[N][N], int T[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            T[j][i] = A[i][j];
        }
    }
}

// --- 印出矩陣 ---
void printMatrix(int A[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int C[3][3];  // A * B
    int T[3][3];  // A^T

    // 計算 A * B
    multiplyMatrix(A, B, C);

    // 計算 A 的轉置
    transposeMatrix(A, T);

    printf("Matrix A:\n");
    printMatrix(A);

    printf("\nMatrix B:\n");
    printMatrix(B);

    printf("\nA * B:\n");
    printMatrix(C);

    printf("\nTranspose of A (A^T):\n");
    printMatrix(T);

    return 0;
}
