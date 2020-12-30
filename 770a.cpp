#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, k, m = 0;
	string alpbt = "abcdefghijklmnopqrstuvwxyz";
	string ans = "";
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		if(i < k){
			ans += alpbt[i];
			}
		else{
			ans += ans[m];
			if(m < k) m++;
			else m--;
			}
		}
	cout << ans << endl;
	return 0;	
	}
