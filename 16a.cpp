// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	ll n;
	int m, sum = 0;
	cin >> n >> m;
	vector<ll> a(m);
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
		sum += a[i];
	}
	vector<ll> c(sum);
	int x = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < a[i]; j++) {
			if (b[i]) {
				c[x] = b[i];
			} else {
				c[x] = 0;
			}
			x++;
		}
	}
	sort(c.begin(), c.end(), greater<int>());
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		if (c[i]) {
			ans += c[i];
		} else ans += 0;
	}
	cout << ans << endl;
	return 0;
}