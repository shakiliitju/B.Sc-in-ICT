#include<bits/stdc++.h>
using namespace std;
int a[100];
class Shakil{
    public:
void Merge(int l,int mid,int h)
{
    int n1,n2,k;
    n1=mid-l+1;
    n2=h-mid;
    int i,j;
    int a1[n1],a2[n2];
    for(i=0;i<n1;i++)
    {
        a1[i]=a[l+i];
    }
     for(j=0;j<n2;j++)
    {
        a2[j]=a[j+mid+1];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(a1[i]<=a2[j])
        {
            a[k]=a1[i];
            k++;
            i++;
        }
        else
        {
            a[k]=a2[j];
            k++;
            j++;
        }
    }
        while(i<n1)
        {
            a[k]=a1[i];
            k++;
            i++;
        }
        while(j<n2)
        {
            a[k]=a2[j];
            k++;
            j++;


    }

}
void merge_short(int l,int h)
{

    if(l>=h){
        return;}
         int mid=(l+h)/2;
    merge_short(l,mid);
    merge_short(mid+1,h);
    Merge(l,mid,h);
}
};
int main()
{
    Shakil cal;
    int n;
    cout<<"Enter the array size:"<<endl;
    cin>>n;
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cal.merge_short(0,n-1);
    cout<<endl;
    cout<<"Print the array in ascending order:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"\nPrint the array in descending order:"<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
