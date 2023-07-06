#include <bits/stdc++.h>

using namespace std;
vector<int> adj[2000];
bool visited[2000];
bool yes = false;

void dfs(int s, int b){
	if (visited[s]) return;
	if(s == b){
		yes = true;
		return;
	}
	visited[s] = true;
	for (auto u: adj[s]) {
		dfs(u,b);
	}
}

int main() {
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	for(int i = 0; i < m; i++){
		int one, two;
		cin >> one >> two;
		adj[one].push_back(two);
		adj[two].push_back(one);
	}
	dfs(a,b);
	if(yes == true){
		cout << "GO SHAHIR!" << endl;
	}
	else{
		cout << "NO SHAHIR!" << endl;
	}
	
    return 0;
}
