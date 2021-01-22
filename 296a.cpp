// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n;
	cin >> n;
	int a[n], b[1007];
	for (int i = 0; i < 1007; i++) {
		b[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[a[i]]++;
	}
	for (int i = 0; i < 1001; i++) {
		if (n % 2 == 0 and b[i] >= n / 2 + 1) {
			cout << "NO" << endl;
			return 0;
		}
		if (n % 2 != 0 and b[i] >= n / 2 + 2) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}