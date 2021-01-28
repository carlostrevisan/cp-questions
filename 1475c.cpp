// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //
 
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
 
int main() {
	ll t;
	cin >> t;
	for (int y = 0; y < t; y++) {
		ll a, b, k, ans = 0;
		cin >> a >> b >> k;
		string ar[k], arb[k], str;
		for (int i = 0; i < k; i++) {
			cin >> ar[i];
		}
		for (int i = 0; i < k; i++) {
			cin >> str;
			ar[i] = ar[i] + str;
		}
		ll cnt = 0;
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++) {
				if (ar[i][0] != ar[j][0] and
				    ar[i][1] != ar[j][1]) {
					cnt++;
					ans++;
				}
			}
		}
		cout << ans / 2 << endl;
	}
	return 0;
}