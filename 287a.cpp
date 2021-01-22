// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	char s[4][4];
	int black, white;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cin >> s[i][j];
		}
	}
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			black = 0;
			white = 0;
			if (s[i][j] == '#') black++;
			if (s[i + 1][j] == '#') black++;
			if (s[i][j + 1] == '#') black++;
			if (s[i + 1][j + 1] == '#') black++;
			if (s[i][j] == '.') white++;
			if (s[i + 1][j] == '.') white++;
			if (s[i][j + 1] == '.') white++;
			if (s[i + 1][j + 1] == '.') white++;
			if (black > 2 || white > 2) {
				cout << "YES" << endl;
				return 0;
			}
		}

	}
	cout << "NO" << endl;
	return 0;
}