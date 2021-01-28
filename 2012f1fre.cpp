// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, ans = 1;
	cin >> n;
	int x[n];
	for (int i = 0; i < n; i++) cin >> x[i];
	sort(x, x + n);
	for (int i = 0; i < n - 1; i++) {
		if (x[i] < x[i + 1]) ans++;
	}
	cout << ans << endl;
	return 0;
}