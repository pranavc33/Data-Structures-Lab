#import<iostream>
using namespace std;
int n,a[10],low=0,high=9,mid,k;
int bs(int a[],int k,int low,int high)
{
    if(low>high)
        return 0;
    if(low<high)
        {
        mid=(low+high)/2;
    if(k==a[mid])
    return a[mid];
    if(k>a[mid])
    {
        return bs(a,k,mid+1,high);

    }
    if(k<a[mid])
    {
        return bs(a,k,low,mid-1);
    }
        }

}
int main()
{
    mid=(low+high)/2;
    cout<<"Enter Array elements"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key"<<endl;
    cin>>k;
    int ans= bs(a,k,low,high);
    cout<<"The element is "<<ans<<endl;
}

