// Md. Shakil Hossain
// Roll - 2023
// Lab Test 2

#include <bits/stdc++.h>
using namespace std;

void gP(int n, int o, int c, string s, vector<string> &ans){

	if(o==n && c==n){
		ans.push_back(s);
		return;
	}
	if(o<n){
		gP(n, o+1, c, s+"(", ans);
	}
	if(c<o){
		gP(n, o, c+1, s+")", ans);
	}

}



int main() {
	int n;
	cout<<"N = ";
	cin>>n;
	vector<string> ans;
	gP(n,0,0,"",ans);
	cout<<"\nOutput :"<<endl;
	for(auto s:ans){
		cout<<s<<endl;
	}
	return 0;
}
