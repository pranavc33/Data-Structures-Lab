#include<iostream>
using namespace std;
int main()
{
    int i,j,k,m,a[100][100],b[100][100],c[100][100];
    cout<<"Enter the number of rows and columns\n";
    cin>>m;
    cout<<"Enter the elements of A\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of B\n";
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
           if(a[i][j]>b[i][j])
           {
               c[i][j]=a[i][j];
           }
           if(a[i][j]<b[i][j])
           {
               c[i][j]=b[i][j];
           }
        }
    }
    cout<<"The C matrix is\n";
     for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"\t"<<c[i][j];
        }
        cout<<endl;
    }



}

