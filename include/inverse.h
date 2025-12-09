#ifndef MATRIX_H
#define MATRIX_H

void printMatrix(double A[3][3]);
double determinant(double A[3][3]);
void adjoint(double A[3][3], double adj[3][3]);
int inverse(double A[3][3], double inv[3][3]);

#endif

