#ifndef MATRIX_H
#define MATRIX_H

#define N 3   // 矩陣大小，可自行修改

// 矩陣相乘：C = A * B
void multiplyMatrix(int A[N][N], int B[N][N], int C[N][N]);

// 矩陣轉置：T = A^T
void transposeMatrix(int A[N][N], int T[N][N]);

// 印出矩陣
void printMatrix(int A[N][N]);

#endif
