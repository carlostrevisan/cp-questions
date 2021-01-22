// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, x = pow(10 , 9), ans = 0;
	string s;
	bool happened = false;
	cin >> n >> s;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == 'R' and s[i + 1] == 'L') {
			ans = min(((a[i + 1] - a[i]) / 2) , x);
			x = ans;
			happened = true;
		}
	}
	happened ? cout << ans << endl : cout << -1 << endl;
	return 0;
}
