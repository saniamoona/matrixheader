#include<iostream> 
#include "matrix.h"
using namespace std; 
bool isIdentity(int mat[100][100], int N) 
{ 
	for (int row = 0; row < N; row++) 
	{ 
		for (int col = 0; col < N; col++) 
		{ 
			if (row == col && mat[row][col] != 1) 
				return false; 
			else if (row != col && mat[row][col] != 0) 
				return false; 
		} 
	} 
	return true; 
}
void transpose(int A[100][100], int B[100][100],int M,int N) 
{ 
	int i, j; 
	for (i = 0; i < N; i++) 
		for (j = 0; j < M; j++) 
			B[i][j] = A[j][i]; 
}
void getCofactor(int A[100][100], int temp[100][100], int p, int q, int n) 
{ 
	int i = 0, j = 0;  
	for (int row = 0; row < n; row++) 
	{ 
		for (int col = 0; col < n; col++) 
		{ 
			if (row != p && col != q) 
			{ 
				temp[i][j++] = A[row][col]; 
				if (j == n - 1) 
				{ 
					j = 0; 
					i++; 
				} 
			} 
		} 
	} 
} 
int determinant(int A[100][100], int n) 
{ 
	int D = 0; 
	if (n == 1) 
		return A[0][0]; 
	int temp[100][100]; 
	int sign = 1; 
	for (int f = 0; f < n; f++) 
	{ 
		getCofactor(A, temp, 0, f, n); 
		D += sign * A[0][f] * determinant(temp, n - 1); 
		sign = -sign; 
	} 

	return D; 
}
void adjoint(int A[100][100],int adj[100][100],int N) 
{
	if (N == 1) 
	{ 
		adj[0][0] = 1;  
	} 
	int sign = 1, temp[100][100]; 
	for (int i=0; i<N; i++) 
	{ 
		for (int j=0; j<N; j++) 
		{ 
			getCofactor(A, temp, i, j, N); 
			sign = ((i+j)%2==0)? 1: -1; 
			adj[j][i] = (sign)*(determinant(temp, N-1)); 
		} 
	} 
} 
bool isLowerTriangularMatrix(int mat[100][100],int N) 
{ 
	for (int i = 0; i < N; i++) 
		for (int j = i + 1; j < N; j++) 
			if (mat[i][j] != 0) 
				return false; 
	return true; 
}
bool inverse(int A[100][100], float inverse[100][100],int N) 
{ 
	int det = determinant(A, N); 
	if (det == 0) 
	{ 
		cout << "Singular matrix, can't find its inverse"; 
		return false; 
	} 
	int adj[100][100]; 
	adjoint(A, adj,N); 
	for (int i=0; i<N; i++) 
		for (int j=0; j<N; j++) 
			inverse[i][j] = adj[i][j]/float(det); 

	return true; 
}  
