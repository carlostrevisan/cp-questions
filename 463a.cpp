// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n;
	ll ans, davez = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i == 0)
			ans = a[0];
		else {
			davez =  (a[i - 1] - a[i]);
			if (davez < 0) {
				davez *= -1;
				ans += davez;
				davez = 0;
			}
		}
	}
	cout << ans << endl;
}