// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, start = 0, end = 0;
	bool sr = false, sl = false;
	cin >> n;
	char a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	a[0] = '.';
	a[n + 1] = '.';
	for (int i = 1; i <= n; i++) {
		if (a[i - 1] == '.' and a[i] == 'R') {
			start = i;
			sr = true;
			break;
		}
		if (a[i - 1] == 'L' and a[i] == '.') {
			start = i - 1;
			sl = true;
			break;
		}
	}
	if (sr) {
		for (int i = start; i < n; i++) {
			if (a[i] == 'R' and a[i + 1] == 'L') {
				end = i;
				break;
			} else if (a[i] == 'R' and a[i + 1] == '.') {
				end = i + 1;
				break;
			} else {
				end = i;
			}
		}
	} else {
		for (int i = start; i > 0; i--) {
			if (a[i] == 'L' and a[i - 1] == '.') {
				end = i - 1;
				break;
			} else {
				end = i;
			}
		}
	}
	cout << start << " " << end << endl;
	return 0;
}