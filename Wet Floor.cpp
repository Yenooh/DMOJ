#include <bits/stdc++.h>

using namespace std;

int main() {
	int l,w;
	cin >> l >> w;
	vector<string> floor(l);
	for(int i = 0; i < l; i++){
		cin >> floor[i];
	}
	for(int i = 0; i < l; i++){
		for(int j = 0; j < w; j++){
			if(floor[i][j] == 'W'){
				cout << 'W';
				continue;
			}
			else if(floor[i][j+1] == 'W' ||floor[i][j-1] == 'W'){
				cout << 'C';
			}
			else if(i < l-1 && floor[i+1][j] == 'W'){
				cout << 'C';
			}
			else if(i > 0 && floor[i-1][j] == 'W'){
				cout << 'C';
			}
			else{
				cout << '.';
			}
		}
		cout << endl;
	}
	return 0;
}
