// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n = 0;
	bool allfine = true;
	cin >> n;
	char a[n][n];
	int ceiln = n / 2 + 1, first = 0, last = n - 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	char selected = a[0][0], notselected = a[1][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] != selected and 
				a[i][j] != notselected or 
				selected == notselected or 
				a[i][j] == selected and 
				j != first and j != last) {
				allfine = false;
			}
		}
		if (a[i][first] != selected or 
			a[i][last] != selected) {
			allfine = false;
		}
		first++;
		last--;
	}
	if (allfine) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
