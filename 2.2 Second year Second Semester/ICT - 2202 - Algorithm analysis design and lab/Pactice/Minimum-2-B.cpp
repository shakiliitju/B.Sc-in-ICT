#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,t,l,r,c=0,d;
    cin>>n;
    ll a[n+10];
    a[n+1]=INT_MAX;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    while(n>1)
    {
        if(n%2==1)
        {
            n++;
        }

        for(int i=0; i<n/2; i++)
        {
            a[i]=min(a[2*i],a[2*i+1]);
            //cout<<a[2*i]<<" "<<a[2*i+1]<<endl;
        }

        n/=2;
    }

    cout<<a[0];


}
