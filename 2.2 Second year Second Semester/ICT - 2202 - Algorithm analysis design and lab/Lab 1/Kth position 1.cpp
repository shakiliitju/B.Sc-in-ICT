#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ar[500];
    cout<<"How many number : ";
    cin>>n;

    cout<<"Enter your Value : ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
     sort(ar,ar+n);
     int k;
     cout<<"Enter Kth index : ";
     cin>>k;
     cout<<"Kth Largest value is : ";
     cout<<ar[n-k]<<endl;


}
