#include<bits/stdc++.h>
int a[1000];
int n;
using namespace std;
heapify(int i)
{
    int mid=i;
    int l=2*i;
    int r=2*i+1;
    if(l<=n && a[l]>a[mid])
        mid=l;
    if(r<=n && a[r]>a[mid])
        mid=r;
    if(mid!=i)
    {
        swap(a[i],a[mid]);
        heapify(mid);
    }

}
void built()
{
    int mid=n/2;
    for(int i=mid; i>=1; i--)
    {
        heapify(i);
    }
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
    built();
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
