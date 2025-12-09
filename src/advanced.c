// advanced.c - Determinant & Adjoint Matrix


#include "advanced.h"

// -------------------------
// Determinant of 3x3 matrix
// -------------------------
float determinant(Matrix3x3 A) {
    float a = A.m[0][0], b = A.m[0][1], c = A.m[0][2];
    float d = A.m[1][0], e = A.m[1][1], f = A.m[1][2];
    float g = A.m[2][0], h = A.m[2][1], i = A.m[2][2];

    float det =
          a * (e * i - f * h)
        - b * (d * i - f * g)
        + c * (d * h - e * g);

    return det;
}

// -------------------------
// Helper: 2x2 Minor
// -------------------------
float minor2x2(float a, float b, float c, float d) {
    return a*d - b*c;
}

// -------------------------
// Adjoint Matrix of 3x3
// -------------------------
Matrix3x3 adjoint(Matrix3x3 A) {
    Matrix3x3 adj;

    // Cofactor matrix (not yet transposed)
    adj.m[0][0] =  minor2x2(A.m[1][1], A.m[1][2], A.m[2][1], A.m[2][2]);
    adj.m[0][1] = -minor2x2(A.m[1][0], A.m[1][2], A.m[2][0], A.m[2][2]);
    adj.m[0][2] =  minor2x2(A.m[1][0], A.m[1][1], A.m[2][0], A.m[2][1]);

    adj.m[1][0] = -minor2x2(A.m[0][1], A.m[0][2], A.m[2][1], A.m[2][2]);
    adj.m[1][1] =  minor2x2(A.m[0][0], A.m[0][2], A.m[2][0], A.m[2][2]);
    adj.m[1][2] = -minor2x2(A.m[0][0], A.m[0][1], A.m[2][0], A.m[2][1]);

    adj.m[2][0] =  minor2x2(A.m[0][1], A.m[0][2], A.m[1][1], A.m[1][2]);
    adj.m[2][1] = -minor2x2(A.m[0][0], A.m[0][2], A.m[1][0], A.m[1][2]);
    adj.m[2][2] =  minor2x2(A.m[0][0], A.m[0][1], A.m[1][0], A.m[1][1]);

    // 最後一步：transpose cofactor matrix
    return transpose(adj);
}
