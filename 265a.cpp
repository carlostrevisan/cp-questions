#include <bits/stdc++.h>
using namespace std;
 
int main(void){
	int ans = 0;
	string s, t;
	cin >> s >> t;
	for(int i = 0; i < t.size(); i++){
		if(s[ans] == t[i]) ans++;
		}
	cout << ans + 1 << endl;
	return 0;
	}
