#include<iostream>
using namespace std;
void subtraction(int a[100][100],int b[100][100],int r,int d,int sub[100][100])
{
    int i,j;
    for(i = 0; i < r; ++i)
        for(j = 0; j < d; ++j)
            sub[i][j] = a[i][j] - b[i][j];
}
int main()
{
    int r,d,i,j;
    int a[100][100],b[100][100];
    int sub[100][100];
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
    subtraction(a,b,r,d,sub);
    cout<<"difference between matrices:";
    cout<<endl;
    for(i = 0; i < r; ++i)
    {
        for(j = 0; j < d; ++j)
        {
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
