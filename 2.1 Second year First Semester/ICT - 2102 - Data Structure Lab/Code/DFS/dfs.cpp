
#include<bits/stdc++.h>
using namespace std;

vector<int>v[10000];
bool g[10000]= {false};

void dfs(int i)
{
    g[i]=true;
    int j,k,l;
    for(j=0; j<v[i].size(); j++)
    {
        k=v[i][j];
        if(!g[k])dfs(k);

    }

}
main()
{

    long long   T,i,j,k,l,n,r,m,p,q;

    cin>>n;
    cin>>m;

    for(i=0; i<m; i++)
    {
        cin>>j>>k;
        v[j].push_back(k);
        v[k].push_back(j);

    }
    dfs(7);
    for(i=1; i<=n; i++)if(g[i])cout<<i<<" ";
    cout<<endl;

    return 0;
}
