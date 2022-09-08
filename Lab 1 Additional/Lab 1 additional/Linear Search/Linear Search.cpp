#include<iostream>
using namespace std;
int main()
{
    int i,k,a[10];
    int j=0,pos=0;
  cout<<"Enter the numbers\n";
    for(i=0;i<10;i++)
    {
        cin>>a[i];

    }
    cout<<"Enter the key\n";
    cin>>k;
    for(i=0;i<10;i++)
    {
        if(a[i]==k)
        {
            j=1;
            pos=i+1;
        }
    }
    if(j==1)
    {
        cout<<"\nThe number was found on\n"<<pos;
    }
    if(j!=1)
    {
        cout<<"Number not found";
    }

}
