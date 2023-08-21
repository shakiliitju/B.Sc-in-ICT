#include<bits/stdc++.h>
using namespace std;
vector < int > adj[1000];
int n, path[1000];

bool check(int v, int pos) {
	
	if((find(adj[path[pos - 1]].begin(), adj[path[pos - 1]].end(), v)) == adj[path[pos - 1]].end()) {

		return false;
	}
	for(int i = 1; i < pos; i++) {
		if(path[i] == v) return false;
	}
	return true;
}

bool func(int pos) {
	if(pos == n + 1) {
		if((find(adj[path[pos - 1]].begin(), adj[path[pos - 1]].end(), path[1])) != adj[path[pos - 1]].end()) {
			return true;
		} else {
			return false;
		}
	}
	for(int i = 2; i <= n; i++) {
		if(check(i, pos)) {
			path[pos] = i;
			if(func(pos + 1) == true) {
				return true;
			}
			path[pos] = -1;
		}
	}
	return false;
}

int main() {
	cout << "How many nodes : \n";
	cin >> n;
	cout << "How many edges : \n";
	int e; cin >> e;
	cout << "Enter edges : ";
	for(int i = 0; i < e; i++) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	cout << endl;
	
	for(int i = 1; i <= n; i++) {
		path[i] = -1;
	}
	path[1] = 1;

	if(func(2) == false) {
		cout << "No solution\n";
	} else {
		cout << "Hamiltonian cycle -> ";
		for(int i = 1; i <= n; i++) {
			cout << path[i] << " ";
		}
		cout << path[1] << endl; 
	}
}