//Oct/22/2020

#include <bits/stdc++.h>
using namespace std;

int main () {
	int t; cin >> t;
	int n, last, first = 0;
	
	while (t--){
		int um = 0;
		cin >> n;
		
		vector<int> a(n);
		
		for (int i = 0; i < n; i++){
			cin >> a[i];
			}
		
		for (int i = 0; i < n; i++){
			if (a[i] == 1){
				first = i;
				break;
				}
			}
			
		for (int i = 0; i < n; i++){
			if (a[i] == 1){
				last = i;
				}
			}
		
		while (first < last){
			if (a[first] == 0) um++;
			first++;
			}
		
		
		cout << um << endl;
		
		}
	}
