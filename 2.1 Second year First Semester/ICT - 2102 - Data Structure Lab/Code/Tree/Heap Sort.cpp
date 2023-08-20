#include<bits/stdc++.h>
using namespace std;
int i,n,x,a[100000];
void heapify(int *a ,int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&&a[left]>a[largest])
        largest=left;
    if(right<n&&a[right]>a[largest])
        largest=right;
    if(largest!=i)
    {
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
}
void heapsort(int *a,int n)
{
    for(i=n/2-1;i>=0;i--)
        heapify(a,n,i);
    for(i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

int main()
{
    printf("Enter the number of elements to add: ");
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    heapsort(a,n);
    cout<<"Sorted array : ";
    for(i=0;i<n;i++)cout<<a[i]<<" ";

}
