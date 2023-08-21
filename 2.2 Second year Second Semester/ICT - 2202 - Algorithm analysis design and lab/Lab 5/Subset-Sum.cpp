#include<bits/stdc++.h>
using namespace std;
int arr[10000],sz,sum;

void display(int arr[],int n)
{
    cout<<"\nSubset Sum : ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

}

void subSum(int ans[],int subsz,int tot,int cnt)
{
    if(tot==sum)
    {
        display(ans,subsz);
        return ;
    }
    else
    {
        for (int i=cnt;i<sz;i++)
        {
            ans[subsz]=arr[i];
            subSum(ans, subsz + 1, tot + arr[i], i+ 1);
        }
    }
}

main()
{
    cout<<"Enter array size : ";
    cin>>sz;
    cout<<"Enter array : ";
    int sm=0;
    for(int i=0; i<sz; i++)
    {
        cin>>arr[i];
        sm+=arr[i];
    }
    cout<<"Enter target : ";
    cin>>sum;
    int ans[sz+1];
    subSum(ans,0,0,0);
    return 0;


}
