#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[1000];
    cout<<"how many number: ";
    cin>>n;
    for(int i=0;i<n;i++){

        cin>>a[i];

    }
    int x=a[0];
    for(int i=1;i<n;i++){
        if(x>a[i])
        x=a[i];

    }
    cout<<x;

        //sort(v.end(),v.begin());
        //cout<<v[0]<<endl;

}
