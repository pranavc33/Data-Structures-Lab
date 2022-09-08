#include<iostream>
using namespace std;
int main()
{
    int i,j,a[100][100],b[100][100],m,p[10][10],s[10][10],
    cout<<"Enter the number of rows and elements\n";
    cin>>m;
    cout<<"Enter the elements\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements for B\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
          p[i][j]=a[i][j]*b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }


}
