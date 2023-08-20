#include<bits/stdc++.h>
using namespace std;
vector <int> Graph[1000];

void printGraph(vector<int>Graph[], int Max)
{
    cout << "The graph is:" << endl;
    for (int i = 0; i <= Max; i++)
    {
        for (int j = 0; j < Graph[i].size(); j++)
        {
            cout << Graph[i][j];
            if(j!=Graph[i].size()-1)
                cout<<" -> ";

        }
        cout << endl;

    }
}

int main()
{
    int v,e,mx=0;
    cout<<"The number of vertex and edges"<<endl;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        mx=max(mx,max(x,y));

        Graph[x].push_back(y);
        Graph[y].push_back(x);
    }

    printGraph(Graph, mx);
    return 0;
}
