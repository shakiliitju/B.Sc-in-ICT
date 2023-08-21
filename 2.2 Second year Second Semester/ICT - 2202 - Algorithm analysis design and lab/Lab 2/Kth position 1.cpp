#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,ar[500];
    cout<<"How many number : ";
    cin>>n;

    cout<<"Enter your Value : ";
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        //ar[i]=rand()%1000;
    }

    sort(ar,ar+n);
    int k;
    cout<<"Enter Kth index : ";
    cin>>k;
    cout<<"Kth Largest value is : ";
    cout<<ar[n-k]<<endl;


    double start_s=clock();
    sort(ar,ar+n);
    double stop_s=clock();
    cout << "Time: " << (stop_s/1000) << " seconds" <<endl;


}
