#include<iostream>
using namespace std;

void print(int m, int n, int a[100][100])
{
    int i,j;
	for(i = 0; i < m; ++i)
    {
        for(j = 0; j < n; ++j)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

/* Driver program to test above functions */
int main()
{
	int a[100][100] ;
    int R,C,i,j;
    cout<<"enter order of matrix:";
    cin>>R>>C;
    cout<<"enter matrix:";
    for(i = 0; i < R; ++i)
        for(j = 0; j < C; ++j)
            cin>>a[i][j];
	print(R, C, a);
	return 0;
}
