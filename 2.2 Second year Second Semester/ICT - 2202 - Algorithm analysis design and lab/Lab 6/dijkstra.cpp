#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
#define pb push_back
#define pii pair<int,int>
vector < pii > adj[100000];
vector < int > p, d;

void dijktra(int s, int n) {
	d.assign(n, INF);
	p.assign(n, -1);

	d[s] = 0;

	priority_queue < pii, vector<pii>, greater<pii>> q;

	q.push({0, s});
	while(!q.empty()) {
		int x = q.top().second;
		int crtd = q.top().first;
		q.pop();

		if(crtd != d[x]) continue;

		for(auto y : adj[x]) {
			int to = y.first;
			int len = y.second;
		}
	}
}

int main() {
	int n;
	cout << "Number of nodes :";
	cin >> n;
	int m;
	cout << "How many edges :";
	cin >> m;
	for(int i = 0; i < n; i++) {
		int x, y, w; cin >> x >> y >> w;
		adj[x].pb({y, w});
		adj[y].pb({x, w});
	}
	cout << "Source node : ";
	int s; cin >> s;
	dijktra(s, n);
}