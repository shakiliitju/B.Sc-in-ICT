// Md. Shakil Hossain
// Roll - 2023
// Lab Test 1
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int n;
int x[100],y[100];
bool knap(int i,int j,int k)
{
    if(i==n+1)
    {
        if(j==k)
            return true;
        else
            return false;
    }
    bool p1=knap(i+1,x[i]+j,k);
    if(p1)
    {
        v.push_back(x[i]);
        return true;
    }
    bool p2=knap(i+1,j,k+y[i]);
    if(p2)
    {
        v.push_back(y[i]*-1);
        return true;
    }
    return false;
}


main()
{
    int i,j,k,l,m;
    cout<<"n= ";
    cin>>n;
    cout<<"X= ";
    for(i=1; i<=n; i++)
        cin>>x[i];
    cout<<"Y= ";
    for(i=1; i<=n; i++)
        cin>>y[i];
    if(knap(0,0,0))
    {
        cout<<"\nSolution Exists"<<endl;
        cout<<"Z= ";
        for(i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<endl;

    }
    else
        cout<<"NO"<<endl;



    return 0;
}
