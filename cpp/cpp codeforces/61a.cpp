#include <bits/stdc++.h>
using namespace std;

int main (){
	string n1, n2;
	cin >> n1;
	cin >> n2;
	int n1size = n1.size(); 
	string ans[n1size];
	for (int i = 0; n1size > i; i++){
			if (n1[i] != n2[i])	ans[i] = '1';
			else ans[i] = '0';
			cout << ans[i];
		}
	return 0;
	}
