#include <stdio.h>
#include "matrix.h"


void printMatrix(double A[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%8.3f ", A[i][j]);
        }
        printf("\n");
    }
}


double determinant(double A[3][3]) {
    double det = 0;

    det =  A[0][0] * (A[1][1]*A[2][2] - A[1][2]*A[2][1])
         - A[0][1] * (A[1][0]*A[2][2] - A[1][2]*A[2][0])
         + A[0][2] * (A[1][0]*A[2][1] - A[1][1]*A[2][0]);

    return det;
}


void adjoint(double A[3][3], double adj[3][3]) {
    adj[0][0] =  (A[1][1]*A[2][2] - A[1][2]*A[2][1]);
    adj[0][1] = -(A[1][0]*A[2][2] - A[1][2]*A[2][0]);
    adj[0][2] =  (A[1][0]*A[2][1] - A[1][1]*A[2][0]);

    adj[1][0] = -(A[0][1]*A[2][2] - A[0][2]*A[2][1]);
    adj[1][1] =  (A[0][0]*A[2][2] - A[0][2]*A[2][0]);
    adj[1][2] = -(A[0][0]*A[2][1] - A[0][1]*A[2][0]);

    adj[2][0] =  (A[0][1]*A[1][2] - A[0][2]*A[1][1]);
    adj[2][1] = -(A[0][0]*A[1][2] - A[0][2]*A[1][0]);
    adj[2][2] =  (A[0][0]*A[1][1] - A[0][1]*A[1][0]);
}


int inverse(double A[3][3], double inv[3][3]) {
    double det = determinant(A);

    if (det == 0) {
        return 0; 
    }

    double adj[3][3];
    adjoint(A, adj);

    // inverse = adj(A) / det
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inv[i][j] = adj[i][j] / det;
        }
    }

    return 1;
}
