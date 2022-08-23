#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,t,l,r,c=0,d;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    ll a[n+10];

cout<<"Enter the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    while(n>1)
    {
        for(int i=0;i<n/2;i++)
        {
            a[i]=min(a[2*i],a[2*i+1]);
        }
        n/=2;
    }
   cout<<"Print the Minimum:"<<endl;
    cout<<a[0];


}
