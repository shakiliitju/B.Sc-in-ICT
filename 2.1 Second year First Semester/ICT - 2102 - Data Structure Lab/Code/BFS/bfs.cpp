

#include<bits/stdc++.h>
using namespace std;

vector<int>v[10000];
bool g[10000]= {false};
int dis[10000];

void bfs(int i)
{

    g[i]=true;
    queue<int>q;
    q.push(i);
    int j,k,l;
    while(q.size()>0)
    { l=q.front();
        for(j=0;j<v[l].size();j++){
            k=v[l][j];
            if(!g[k]){ dis[k]=0;
                q.push(k);
                g[k]=true;
                dis[k]=dis[l]+1;
            }

        }
        q.pop();


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
    dis[1]=0;
    bfs(1);
    for(i=1;i<=n;i++)cout<<dis[i]<<" ";
    cout<<endl;

    return 0;
}
