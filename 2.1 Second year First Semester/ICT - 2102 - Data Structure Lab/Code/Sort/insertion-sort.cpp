#include<bits/stdc++.h>
using namespace std;
int A[1000];
class Shakil
{
public:
    void insertion_sort(int n)
    {
        int i,j,item;
        for(i=1;i<n;i++)
        {
            item=A[i];
            j=i-1;
            while(j>=0 && A[j]>item)
            {
                A[j+1]=A[j];
                j=j-1;
            }
            A[j+1]=item;
        }
    }
};
main()
{
    Shakil cal;
    int item;
    cout<<"enter the size : "<<endl;
    int i,j,k,l,m,n;
    cin>>n;
    cout<<"enter the array : "<<endl;
    for(i=0;i<n;i++)cin>>A[i];
    cal.insertion_sort(n);
    cout<<"after sorted : "<<endl;
    for(i=0;i<n;i++)cout<<A[i]<<" ";
    cout<<endl;

    return 0;

}
