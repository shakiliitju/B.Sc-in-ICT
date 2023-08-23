#include<bits/stdc++.h>
using namespace std;
int val[100], wt[100];
int knap_Sack(int n, int w)
{
    if(n==0 || w==0)
        return 0;
    if(wt[n-1]>w)
        return knap_Sack(n-1,w);
    else
        return max(val[n-1]+knap_Sack(n-1,w-wt[n-1]),knap_Sack(n-1,w));
}
int main( )
{
    int n,w;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> val[i]  >> wt[i];
    }
    cin >> w;
    cout << knap_Sack(n,w) << endl;
}
