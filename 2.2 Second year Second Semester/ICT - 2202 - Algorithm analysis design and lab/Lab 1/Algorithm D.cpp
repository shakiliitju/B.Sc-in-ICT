#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[1000];
    cout<<"How many number: ";
    cin>>n;
    cout<<"Enter number : ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    int j=0,flag=1,Min;
    while(flag)
    {
        Min=a[j];
        flag=0;
        for(int i=0; i<n; i++)
        {
            if(Min>a[i])
                flag=1;
        }
        j++;
    }
    cout<<"Minimum element is : ";
    cout<<Min<<endl;

}




