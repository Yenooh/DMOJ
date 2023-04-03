#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	string inp; cin >> inp;
	int score = 0;
	int ammo1 = 0, ammo2 = 0;
	for(int i = 0; i < n; i++){
		if(inp[i] == 'R'){
			ammo2++;
			if(ammo1 > 0){
				ammo1--;
				score++;
			}
			else if(ammo1 == 0){
				ammo1++;
			}
		}
		if(inp[i] == 'B'){
			ammo1++;
		}
		if(inp[i] == 'F'){
			if(ammo2 > 0){
				ammo2--;
			}
			else if(ammo2 == 0 && ammo1 > 0){
				ammo1--;
				score++;
			}
			else{
				ammo1++;
			}
		}
	}
	cout << score;
	
	return 0;
}
