#include<bits/stdc++.h>
using namespace std;
class Shakil
{
public:
    void BubbleShort()
    {
        int n;
        cout<<"Enter the Array Size:"<<endl;
        cin>>n;
        int a[n];
        cout<<"Enter the Array:"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<endl<<"Print The Array:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        int j;
        for(int i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                    swap(a[i],a[j]);
            }
        }
        cout<<"Print the sorted Array:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }

};
int main()
{
    Shakil cal;
    cal.BubbleShort();
}
