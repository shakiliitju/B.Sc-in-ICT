
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double start_s=clock();
    int n,a[1000];
    cout<<"How many number : ";
    cin>>n;
    cout<<"Enter number : ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        //ar[i]=rand()%1000;
    }

    int min=a[0];
    for(int i=1; i<n; i++)
    {
        if(min>a[i])
            min=a[i];
    }
    cout<<"Minimum element is : ";
    cout<<min<<endl;

    double stop_s=clock();
    cout << "Time: " << (stop_s/1000) << " seconds" <<endl;


}
