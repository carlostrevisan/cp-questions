#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, count = 0, countn = 0;
	cin >> n;
	int t[n][3];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 3; j++){
		cin >> t[i][j];
		if (t[i][j] == 1) countn++;
		}
	if (count >= 2) count++;
	}
	cout << count << endl;
}
