// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int ne, n, t, ans = 0;
	cin >> ne >> t;
	vector<int> a(ne);
	for (int i = 1; i <= ne; i++) {
		cin >> a[i];
	}
	n = ne;
	int test;
	for (int i = 0; i < n; i++) {
		if (a[t + i] == a[t - i] and a[t + i] == 1 and a[t - i] == 1) ans += 2;
		if ((ll)t + i > n and (ll)t - i > 0 and a[t - i] == 1) {
			ans++;
		}
		if ((ll)t - i < 1 and (ll)t + i <= n and a[t + i] == 1) {
			ans++;
		}
	}
	if (a[t] == 1) ans--;
	cout << ans << endl;
	return 0;
}