// basic.h - Basic 3x3 Matrix Operations
// Author: 41471214h_ruby

#ifndef BASIC_H
#define BASIC_H

// 宣告 3x3 矩陣型態
typedef struct {
    float m[3][3];
} Matrix3x3;

// 基礎運算
Matrix3x3 add(Matrix3x3 A, Matrix3x3 B);
Matrix3x3 subtract(Matrix3x3 A, Matrix3x3 B);
Matrix3x3 elementwise_multiply(Matrix3x3 A, Matrix3x3 B);

// 輔助列印功能（方便測試）
void printMatrix(Matrix3x3 A);

#endif
