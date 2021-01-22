// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	char a[20];
	int n = 0;
	while (cin >> a[n]) {
		n++;
	}
	for (int i = 0; i < n; i++) {
		if (i == 0 and 9 - (a[i] - 48) == 0) {
			cout << a[i];
		} else if (a[i] - 48 >= 5) {
			cout << 9 - (a[i] - 48);
		} else cout << a[i];
	}
	return 0;
}