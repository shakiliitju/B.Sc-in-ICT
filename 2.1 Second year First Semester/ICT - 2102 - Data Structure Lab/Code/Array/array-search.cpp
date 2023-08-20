#include<bits/stdc++.h>
using namespace std;
class Shakil
{
public:
    void Search()
    {
        int a[100];
        int n;
        cout<<"Enter the size of Array:"<<endl;
        cin>>n;
        cout<<"Enter the Array"<<endl;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int value;
        cout<<"Enter the searching value "<<endl;
        cin>>value;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==value)
            {
                flag++;
            }
        }
        if(flag>0)
            cout<<"find the value"<<endl;
        else
            cout<<"Not Finding The Value"<<endl;
    }

};
int main()

{

    Shakil k;
    k.Search();

}
