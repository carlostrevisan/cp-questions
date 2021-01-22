// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, k, ans = 0, sum = 0;
	cin >> n >> k;
	int r, l;
	while (n--) {
		cin >> r >> l;
		sum += (l - r) + 1;
	}
	while (sum % k != 0) {
		sum++;
		ans++;
	}
	cout << ans << endl;
	return 0;
}