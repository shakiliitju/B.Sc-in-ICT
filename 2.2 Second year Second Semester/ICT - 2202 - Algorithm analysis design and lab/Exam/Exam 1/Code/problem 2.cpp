// Md. Shakil Hossain
// Roll - 2023
// Lab Test 1
#include<bits/stdc++.h>
using namespace std;
vector<int>v1,v2;
int n,T;
int x[100],y[100];
bool knap(int i,int j,int k)
{
    if(i==n+1)
    {
        if(j+k==T)
            return true;
        else
            return false;
    }
    bool p1=knap(i+1,x[i]+j,k);
    if(p1)
    {
        if(i!=0)
            v1.push_back(x[i]);
        return true;
    }
    bool p2=knap(i+1,j,k+y[i]);
    if(p2)
    {
        if(i!=0)
            v2.push_back(y[i]);
        return true;
    }
    return false;
}


main()
{
    int i,j,k,l,m;
    cout <<"n= ";
    cin>>n;
    cout<<"A= ";
    for(i=1; i<=n; i++)
        cin>>x[i];
    cout<<"B= ";
    for(i=1; i<=n; i++)
        cin>>y[i];
    cout<<"T= ";
    cin>>T;
    if(knap(0,0,0))
    {
        cout<<"\nSolution Exists"<<endl;
        cout<<"A : ";
        int sum1=0,sum2=0;
        for(i=v1.size()-1; i>=0; i--)
        {
            cout<<v1[i]<<" ";
            sum1+=v1[i];
        }
        cout<<endl;
        cout<<"B : ";
        for(i=v2.size()-1; i>=0; i--)
        {
            cout<<v2[i]<<" ";
            sum2+=v2[i];
        }
        cout<<endl;
        cout<<"Sum1 : "<<sum1<<endl;
        cout<<"Sum2 : "<<sum2<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
