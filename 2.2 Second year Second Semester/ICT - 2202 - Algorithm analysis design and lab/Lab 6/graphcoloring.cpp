#include<bits/stdc++.h>
using namespace std;
vector < int > adj[1000];

void func(int n) {
	int color[n + 10];
	for(int i = 1; i <= n; i++) 
	color[i] = -1;

	color[1] = 1;

	int vis[n + 10] = {0};

	for(int i = 2; i <= n; i++) {
		for(auto x : adj[i]) {
			if(color[x] != -1) {
				vis[x] = 1;
			}
		}

		for(int j = 1; j <= n; j++) {
			if(vis[j] == 0) {
				color[i] = j;
				break;
			}
		}
		for(auto x : adj[i]) {
			if(color[x] != -1) {
				vis[x] = 0;
			}
		}
	}

	for(int i = 1; i <= n; i++) {
		cout << "Vertex " << i << " color is : " << color[i] << endl;
	}
	cout << endl;

}

int main() {

	cout << "How many nodes : \n";
	int n; cin >> n;
	cout << "How many edges : \n";
	int e; cin >> e;
	cout << "Enter edges : \n";

	for(int i = 0; i < e; i++) {
		int x, y; 
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	cout << endl;
	func(n);

}