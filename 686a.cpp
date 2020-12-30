#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, x, d = 0, qnt, ans = 0;
	string str;
	cin >> n >> x;
	d += x;
	for(int i = 0; i < n; i++){
		cin >> str;
		cin >> qnt;
		if(str[0] == '+') d += qnt;
		else if (str[0] == '-' and d >= qnt) d -= qnt;
		else ans++;		
		}
	cout << d << " " << ans << endl;
	return 0;
	}
