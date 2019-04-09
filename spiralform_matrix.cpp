#include<iostream>
using namespace std;

void spiralPrint(int m, int n, int a[100][100])
{
	int i, k = 0, l = 0;

	while (k < m && l < n)
	{
		/* Print the first row from the remaining rows */
		for (i = l; i < n; ++i)
		{
			cout<<a[k][i]<<" ";
		}
		k++;

		/* Print the last column from the remaining columns */
		for (i = k; i < m; ++i)
		{
			cout<< a[i][n-1]<<" ";
		}
		n--;

		/* Print the last row from the remaining rows */
		if ( k < m)
		{
			for (i = n-1; i >= l; --i)
			{
				cout<< a[m-1][i]<<" ";
			}
			m--;
		}

		/* Print the first column from the remaining columns */
		if (l < n)
		{
			for (i = m-1; i >= k; --i)
			{
				cout<<a[i][l]<<" ";
			}
			l++;
		}
	}
}

/* Driver program to test above functions */
int main()
{
	int a[100][100] ;
    int R,C,i,j;
    cout<<"enter order of matrix:";
    cin>>R>>C;
    cout<<"enter matrix";
    for(i = 0; i < R; ++i)
        for(j = 0; j < C; ++j)
            cin>>a[i][j];
	spiralPrint(R, C, a);
	return 0;
}
