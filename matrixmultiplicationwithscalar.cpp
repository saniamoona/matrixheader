#include<iostream>
using namespace std;
void mulwithscalar(int a[100][100],int b,int r,int d,int mul[100][100])
{
    int i,j;
    for(i = 0; i < r; ++i)
        for(j = 0; j < d; ++j)
            mul[i][j] = a[i][j] * b;
}
int main()
{
    int r,d,i,j;
    int a[100][100],b;
    int mul[100][100];
    cout<<"enter order of matrix";
    cin>>r>>d;
    cout<<"enter matrix values: ";
    for(i = 0; i < r; ++i)
        for(j = 0; j < d; ++j)
            cin>>a[i][j];
    cout<<"enter scalar value: ";
    cin>>b;
    mulwithscalar(a,b,r,d,mul);
    cout<<"multiplication of matrix with a scalar:";
    cout<<endl;
    for(i = 0; i < r; ++i)
    {
        for(j = 0; j < d; ++j)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
