// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	ll n, d, j;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> d;
		j = d / 2020;
		d = d % 2020;
		if (j >= d) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}