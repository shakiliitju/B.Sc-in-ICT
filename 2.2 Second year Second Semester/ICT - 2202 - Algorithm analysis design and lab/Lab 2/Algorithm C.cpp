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

    sort(a,a+n);
    cout<<"Minimum element is : ";
    cout<<a[0]<<endl;

    double stop_s=clock();
    cout << "Time: " << (stop_s/1000) << " seconds" <<endl;

}


