// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, m, counter = 0;
	char c;
	cin >> n >> m >> c;
	char d[n][m];
	set<char> ans;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> d[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (d[i][j] == c) {
				if (i + 1 < n) {
					ans.insert(d[i + 1][j]);
				}
				if (i - 1 >= 0) {
					ans.insert(d[i - 1][j]);
				}
				if (j + 1 < m) {
					ans.insert(d[i][j + 1]);
				}
				if (j - 1 >= 0) {
					ans.insert(d[i][j - 1]);
				}

			}
		}
	}
	ans.erase(c);
	ans.erase('.');
	cout << ans.size() << endl;
	return 0;
}