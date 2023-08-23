#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of array size"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the array"<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>A[i];
    }
    int min=A[1];
    for(int i=2; i<=n; i++)
    {
        if(min>A[i])
            min=A[i];
    }
    cout<<"Print the minimun value:"<<min<<endl;

}
