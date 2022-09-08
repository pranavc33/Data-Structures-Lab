#include<iostream>
using namespace std;
int main()
{
    int i,j,k,mid,high,low,a[10],found=0,pos;
    cout<<"Enter the sorted list\n";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key\n";
    cin>>k;
    for(i=0;i<10;i++)
    {
        low=0;
        high=9;
        mid=(low+high)/2;
        if(k>a[mid])
        {
           low=mid+1;
           mid=(low+high)/2;
        }
        if(k<a[mid])
        {
            high=mid-1;
            mid=(low+high)/2;
        }
        if(a[i]==k)
        {
            found=1;
            pos=i+1;
        }
    }
    cout<<"The number was found at\n"<<pos;

}
