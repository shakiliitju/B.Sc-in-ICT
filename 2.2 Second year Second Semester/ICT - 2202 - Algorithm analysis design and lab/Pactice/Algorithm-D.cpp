#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,t,l,r,c=0,d;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    ll a[n+10];
  cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    t=1,l=0;

    while(t)
    {
        t=0;
        m=a[l];
        for(int i=0;i<n;i++)
        {
            if(a[i]<m)
            {
                t=1;
                break;
            }
        }

        l++;
    }
  cout<<"Print the minimum:"<<endl;
    cout<<m;


}
