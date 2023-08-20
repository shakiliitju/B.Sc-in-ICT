#include<bits/stdc++.h>
using namespace std;
class Shakil
{
public:
    int Insert(int data)
    {
        int a[100];
        int n,j;
        cout<<"Enter the size of Array"<<endl;
        cin>>n;
        j=n;
        cout<<"Enter the Array"<<endl;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int insert_value;
        cout<<"Enter which the position inserted the value"<<endl;
        cin>>insert_value;
        n=n+1;
        //for(int i=j;i>insert_value;i--)
        while(j>=insert_value)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[insert_value]=data;
        cout<<"print the value"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
    }
};
int main()
{
    int value;
    cout<<"Enter the value which inserted"<<endl;
    cin>>value;
    // int cal;
    Shakil cal;
    cal.Insert(value);
}
