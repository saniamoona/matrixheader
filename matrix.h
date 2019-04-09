#ifndef MATRIX_H
#define MATRIX_H
#include "matrix.cpp"
bool isIdentity(int mat[100][100], int N); 
void transpose(int A[100][100], int B[100][100],int M,int N);
void getCofactor(int A[100][100], int temp[100][100], int p, int q, int n);
int determinant(int A[100][100], int n);
void adjoint(int A[100][100],int adj[100][100],int N);
bool isLowerTriangularMatrix(int mat[100][100],int N);
bool inverse(int A[100][100], float inverse[100][100],int N); 
#endif
