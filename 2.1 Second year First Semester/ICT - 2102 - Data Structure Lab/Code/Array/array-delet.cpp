#include<bits/stdc++.h>
using namespace std;
class Shakil
{
public:
    void Delet()
    {
        int n;
        cout<<"Enter the Array size"<<endl;
        cin>>n;
        int A[n],k,j;
        cout<<"Which position delete the item:"<<endl;
        cin>>k;
        j=k;
        cout<<"Enter The Array: "<<endl;
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
        }
        cout<<"Print The Array: "<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl;
        while(j<n)
        {
            A[j-1]=A[j];
            j=j+1;
        }
        n=n-1;
        //A[k]=item;
        cout<<"Print The Deleted Array: "<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<A[i]<<" ";
        }
    }
    };
    int main()
    {
        Shakil cal;
        cal.Delet();
    }
        //return 0;


