#include<bits/stdc++.h>
using namespace std;
int x[1000];
void Merge(int l,int mid,int r)
{
    int n1,n2;
    int i,j,k;
    n1=mid-l+1;
    n2=r-mid;
    int a1[n1];
    int a2[n2];
    //int x[n1+n2];
    for(int i=0; i<n1; i++)
    {
        a1[i]=x[l+i];
    }
    for( j=0; j<n2; j++)
    {
        a2[j]=x[j+mid+1];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(a1[i]<=a2[j])
        {
            x[k]=a1[i];
            i++;
            k++;
        }
        else{
            x[k]=a2[j];
        k++;
        j++;
        }
    }
    while(i<n1)
    {
        x[k]=a1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        x[k]=a2[j];
        k++;
        j++;
    }

}
void merge_short(int l,int r)
{
    if(l>=r){
        return ;}
    int mid=(l+r)/2;
    merge_short(l,mid);
    merge_short(mid+1,r);
    Merge(l,mid,r);
}
int main()
{
    int i,j,k,l,r;
    int n;

    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    merge_short(0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;

}
