// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, total = 0;
	cin >> n;
	int a[n], b[n];
	bool plus = true;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i];
	}
	if (total != 0) {
		cout << -1 << endl;
		return 0;
	}
	total = 0;
	for (int i = 0; i < n; i++) {
		b[i] = a[i] / 2;
		total += b[i];
	}
	if (total == 0) {
		for (int i = 0; i < n; i++) cout << b[i] << endl;
		return 0;
	} else if (total > 0) {
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 != 0 and total > 0) {
				if (b[i] > floor((double)a[i] / 2)) {
					b[i] = floor((double)a[i] / 2);
					total--;
				}
			}
		}
	} else if (total < 0) {
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 != 0 and total < 0) {
				if (b[i] < ceil((double)a[i] / 2)) {
					b[i] = ceil((double)a[i] / 2);
					total++;
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) cout << b[i] << endl;
	return 0;
}