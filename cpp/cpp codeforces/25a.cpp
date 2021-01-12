#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, lasteven, lastodd, odds = 0, evens = 0; 
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i];
		if (v[i] % 2 == 0){
			lasteven = i;
			evens++;
			} else {
				lastodd = i;
				odds++;
				}
		}
	if (odds < evens) cout << lastodd + 1;
	else cout << lasteven + 1;
	return 0;
	}
