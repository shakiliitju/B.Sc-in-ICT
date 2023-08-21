#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[1000];
    cout<<"How many number : ";
    cin>>n;
    cout<<"Enter number : ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    cout<<"Minimum element is : ";
    cout<<a[0]<<endl;

}


