#include<bits/stdc++.h>
using namespace std;
class Shakil{
public:
void Display(int[],int);
int Partition(int[],int,int);
void Quicksort(int[],int,int);
};
void Shakil::Display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<endl;
}
int Shakil::Partition(int A[],int l,int h)
{
    int i=l-1,j;
    for(j=l;j<h;j++)
    {
        if(A[j]<=A[h])
        {
            i++;
            swap(A[i],A[j]);
        }
    }
    i++;
    swap(A[h],A[i]);
    return i;

}
void Shakil::Quicksort(int A[],int l,int h)
{
    if(l<h)
    {
        int q=Partition(A,l,h);
        Quicksort(A,l,q-1);
        Quicksort(A,q+1,h);
    }
}
int main()
{ Shakil cal;
    int n;
    cout<<"Enter the array size:"<<endl;
    cin>>n;
    int a[100];
    cout<<"Insert the element:"<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"Before sorting:"<<endl;
    cal.Display(a,n);
    cal.Quicksort(a,0,n-1);
     cout<<"After sorting:"<<endl;
     cal.Display(a,n);
    return 0;
}

