#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, a = 0, d = 0;
	string t;
	cin >> n;
	cin >> t;
	for (int i = 0; i < n; i++){
		if (t[i] == 'A') a++;
		if (t[i] == 'D') d++;
	}
	if (d > a) cout << "Danik" << endl;
	else if (a > d) cout << "Anton" << endl;
	else cout << "Friendship" << endl;
	return 0;
}
