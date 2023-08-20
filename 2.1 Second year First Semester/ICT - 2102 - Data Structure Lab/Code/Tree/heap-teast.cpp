#include<bits/stdc++.h>
int a[1000];
int n;
using namespace std;
void test()
{
    int flag=0;
    for(int i=1;i<=n/2;i++)
    {
        if(a[i*2]>a[i] && i*2<=n)flag++;
        else if(a[i*2+1]>a[i] && (i*2+1<=n))flag++;
    }
    if(flag>0)cout<<"Not a heap";
        else
            cout<<"It a heap";
}

int main()
{
    cout<<"Enter the array size:"<<endl;
    cin>>n;
    cout<<"Enter the array:"<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
     test();
    return 0;
}
