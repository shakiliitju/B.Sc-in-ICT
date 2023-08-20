#include<bits/stdc++.h>
using namespace std;
class Shakil
{
public:
    void BinarySearch()
    {
        int n;
        cout<<"Enter the Array Size:"<<endl;
        cin>>n;
        int a[n];
        cout<<"Enter the Array:"<<endl;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int Search;
        cout<<"Enter the search Element:"<<endl;
        cin>>Search;
        int last,first,mid;
        last=n-1;
        first=0;
        mid=int (first+last)/2;
        int flag=0;
        while(last>=first && a[mid]!=Search)
        {
            if(a[mid]>Search)
            {
                last=mid-1;
            }
            else
            {
                first=a[mid]+1;
            }
            mid=int (last+first)/2;
        }
        cout<<endl<<"**** Print The Result ****"<<endl;
        if(a[mid]==Search)
        {
            flag++;
        }
        if(flag>0)
            cout<<"    "<<"Found"<<endl;
        else
            cout<<"    "<<"Not Found"<<endl;
    }
};
int main()
{
    Shakil cal;
    cal.BinarySearch();
}
