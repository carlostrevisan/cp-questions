// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	ll n, m, ans = 0;
	cin >> n >> m;
	ll a[6], b[6];
	for (int i = 0; i <= 6; i++) {
		a[i] = 0;
		b[i] = 0;
		// zera todo o array
	}
	for (int i = 1; i <= n; i++) {
		a[i % 5]++;
		// mostra a quantidade de n que dá resto 0
	}
	for (int i = 1; i <= m; i++) {
		b[i % 5]++;
		// mostra a quantidade de m que dá resto 0
	}
	ans = a[0] * b[0];
	cout << ans << " " << a[0] << " " << b[0] << endl;
	for (int i = 1; i < 5; i++) {
		cout << ans << " ";
		ans += a[i] * b[5 - i];
		cout << ans << endl;
		cout << a[i] << " " << b[5 - i] << endl;
	}
	cout << ans << endl;
	return 0;
}