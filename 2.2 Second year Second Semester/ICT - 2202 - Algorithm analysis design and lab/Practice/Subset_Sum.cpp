
#include <bits/stdc++.h>
using namespace std;
int arr[10000],sa,sum;

void Display(int arr[], int n)
{
    cout<<"\nSubset Sum : ";
        for(int i=0; i<n; i++)
        {
            cout << arr[i]<<" ";
        }
        cout << " = "<<sum;
}

void SubsetSum(int ans[],int s,int t, int c)
{
    if(t==sum)
    {
        Display(ans,s);
        return ;
    }
    else
    {
        for(int i=c; i<sa; i++)
        {
            ans[s]=arr[i];
            SubsetSum(ans,s+1,t+arr[i],i+1);
        }
    }
}

int main()
{
    int a=0;
    cout << "Enter Array size : ";
    cin >>sa;
    cout << "Enter array : ";
    for(int i=0; i<sa; i++)
    {
        cin>>arr[i];
        a+=arr[i];
    }
    cout<<"Enter target : ";
    cin>>sum;
    int ans[sa+1];
    SubsetSum(ans,0,0,0);
    return 0;
}
