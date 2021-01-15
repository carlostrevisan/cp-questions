// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, k, ans = 0;
	cin >> n >> k;
	string a;
	ll ar[10];

	for (int j = 0; j < n; j++) {
		bool kgood = true;
		cin >> a;
		for (int i = 0; i <= 10; ++i) {
			ar[i] = 0;
		}
		for (int i = 0; i < a.size(); ++i) {
			int sint = (int)a[i] - 48;
			ar[sint] = 1;
		}
		for (int i = 0; i <= k; ++i) {
			if (ar[i] != 1) {
				kgood = false;
				break;
			}
		}
		if (kgood) ans++;
	}
	cout << ans << endl;
	return 0;
}