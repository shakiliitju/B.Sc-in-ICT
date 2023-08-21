// Md. Shakil Hossain
// Roll - 2023
// Lab Test 1
#include<bits/stdc++.h>
#define ll long long
#define vr(v) v.begin(),v.end()
#define ff(i,a,b) for (int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
const int MAX=100;
const int MOD = 1e9+7;
const  long long mn=1e15;
int solve(int b, int n, int co[], int we[])
{
    int dp[b+1];
    memset(dp, 0, sizeof dp);

    for (int i=0; i<=b; i++)
      for (int j=0; j<n; j++)
         if (we[j] <= i)
            dp[i] = max(dp[i], dp[i-we[j]] + co[j]);

    return dp[b];
}


int main()
{
  int n,b;
  cout<<"n= ";
  cin>>n;
  cout<<"B= ";
  cin>>b;

    int we[n],co[n];
    cout<<"Weights: ";
    for(int i=0;i<n;i++){
          cin>>we[i];
    }
    cout<<"Costs: ";
    for(int i=0;i<n;i++){
          cin>>co[i];
    }
    cout << "\nMaximum Cost="<<solve(b, n, co, we)<<endl;
    cout<<"weight="<<b<<endl;

    return 0;
}
