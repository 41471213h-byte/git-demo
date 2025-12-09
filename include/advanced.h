#ifndef ADVANCED_H
#define ADVANCED_H

#include "basic.h"  // 使用 Matrix3x3 型別

// 計算 3x3 行列式
float determinant(Matrix3x3 A);

// 計算 3x3 伴隨矩陣（adj(A)）
Matrix3x3 adjoint(Matrix3x3 A);

#endif
