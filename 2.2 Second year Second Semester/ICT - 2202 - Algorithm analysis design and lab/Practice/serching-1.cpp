#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of array size:"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the array"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    int k;
    cout<<"Enter the position which printed"<<endl;
    cin>>k;
    for(int i=1;i<=n;i++)
    {
      for(int j=i+1;j<=n;j++)
      {
          if(A[i]>A[j])
            swap(A[i],A[j]);
      }

    }
    cout<<"Print the sorted array in descending order:"<<endl;
    for(int i=n;i>=1;i--)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    //cout<<"Print the sorted array in descending order:"<<endl;

            cout<<"\nPrint the k position value: "<<A[k]<<endl;




}
