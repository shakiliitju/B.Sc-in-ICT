#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a1[1000],a2[1000];
    cout<<"How many number : ";
    cin>>n;
    cout<<"Enter number : ";
    for(int i=0; i<n; i++)
    {
        cin>>a1[i];
    }

    while(n>1)
    {
        for(int i=0; i<n/2; i++)
        {
            a2[i]=min(a1[2*i],a1[2*i+1]);
            a1[i]=a2[i];
        }
        //copy(a2,a2+n/2,a1);
        n/=2;

    }
    cout<<"Minimum element is : ";
    cout<<a2[0]<<endl;

}


