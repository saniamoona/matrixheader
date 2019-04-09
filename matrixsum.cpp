#include<iostream>
using namespace std;
void add(int a[100][100],int b[100][100],int c[100][100],int r,int d,int sum[100][100])
{
    int i,j;
    for(i = 0; i < r; ++i)
        for(j = 0; j < d; ++j)
            sum[i][j] = a[i][j] + b[i][j]+ c[i][j];
}
int main()
{
    int r,d,i,j;
    int a[100][100],b[100][100],c[100][100];
    int sum[100][100];
    cout<<"enter order of matrices";
    cin>>r>>d;
    cout<<"enter matrix 1";
    for(i = 0; i < r; ++i)
        for(j = 0; j < d; ++j)
            cin>>a[i][j];
    cout<<"enter matrix 2";
    for(i = 0; i < r; ++i)
        for(j = 0; j < d; ++j)
            cin>>b[i][j];
    cout<<"enter matrix 3";
    for(i = 0; i < r; ++i)
        for(j = 0; j < d; ++j)
            cin>>c[i][j];
    add(a,b,c,r,d,sum);
    cout<<"sum of matrices:";
    cout<<endl;
    for(i = 0; i < r; ++i)
    {
        for(j = 0; j < d; ++j)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
