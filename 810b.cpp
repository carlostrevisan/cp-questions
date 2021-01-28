// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	ll n, f, ans = 0;
	cin >> n >> f;
	ll k[n], l[n], s[n];
	for (ll i = 0; i < n; i++) {
		cin >> k[i] >> l[i];
		s[i] = min(2 * k[i], l[i]) - min(k[i], l[i]);
		ans += min(k[i], l[i]);
	}
	sort(s, s + n, greater<ll>());
	for (ll i = 0; i < f; i++) {
		ans += s[i];
	}
	cout << ans << endl;
	return 0;
}