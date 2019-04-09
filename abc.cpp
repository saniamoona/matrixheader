#include<iostream>
#include "matrix.h"
using namespace std; 
int main() 
{ 
	int M,N;
	cin>>M>>N;
	int A[100][100];
	for (int i=0; i<M; i++) 
	{ 
		for (int j=0; j<N; j++) 
			cin >> A[i][j];
	} 
	int B[100][100], i, j;
	//checking whether matrix is identity or not.
	if(M==N)
	{
		if (isIdentity(A, N)) 
			cout << "Yes,matrix is identity matrix "<<"\n";
		else
			cout << "No,it is not identity matrix. "<<"\n"; 
	} 
	else
		cout << "matrix is not square. "<<"\n"; 
	//tranpose of matrix
	transpose(A, B,M,N); 
	cout<<"Result matrix is \n"; 
	for (i = 0; i < N; i++) 
	{ 
		for (j = 0; j < M; j++) 
		cout<<B[i][j]<<" "; 
		cout<<"\n"; 
	} 
	//adjoint of matrix
	int adj[100][100];
	cout << "\nThe Adjoint is :\n"; 
	adjoint(A,adj,N);
	for (i = 0; i < N; i++) 
	{ 
		for (j = 0; j < N; j++) 
		cout<<adj[i][j]<<" "; 
		cout<<"\n"; 
	} 
	//determinent of matrix.
	cout<<"det is"<<determinant(A, N); 
	//check if matrix to lower triangular.
	if (isLowerTriangularMatrix(A,N)) 
		cout << "Yes,it is lower triangular"; 
	else
		cout << "No,it is not!";
	//inverse matrix.
	float inv[100][100];
	if (inverse(A, inv,N));
	cout<<"inverse matrix is:\n" ;
 	for (i = 0; i < N; i++) 
	{ 
		for (j = 0; j < N; j++) 
		cout<<inv[i][j]<<" "; 
		cout<<"\n"; 
	} 
	return 0; 
}
