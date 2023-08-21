
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[500];
    cout<<"How many number : ";
    cin>>n;

    cout<<"Enter Value : ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int k;
    cout<<"Enter Kth index : ";
    cin>>k;
    sort(a,a+k);
    for(int i=0; i<n; i++)
    {
        if(a[k-1]<a[i])
            a[k-1]=a[i];
    }
    cout<<"Kth Largest value is : ";
    cout<<a[k-1]<<endl;

}
