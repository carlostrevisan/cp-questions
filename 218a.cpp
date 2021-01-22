// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, k;
	cin >> n >> k;
	int y[2 * n + 1];
	for (int i = 1; i <= 2 * n + 1; i++) {
		cin >> y[i];
	}
	for (int i = 1; i <= ((2 * n) + 1); i++) {
		if (i % 2 == 0 and k > 0 and y[i] - 1 > y[i - 1] and y[i] - 1 > y[i + 1]) {
			cout << y[i] - 1 << " " << endl;
			k--;
		} else cout << y[i] << " ";
	}
	return 0;
}