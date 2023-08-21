
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

    int min=a[0];
    for(int i=1; i<n; i++)
    {
        if(min>a[i])
            min=a[i];
    }
    cout<<"Minimum element is : ";
    cout<<min<<endl;


}
