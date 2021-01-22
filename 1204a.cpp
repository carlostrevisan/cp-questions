// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	string a;
	int n = 0, ans = 0;
	bool thereis = false;
	cin >> a;
	for (int i = 1; i < a.size(); i++) {
		if (a[i] == '1') {
			thereis = true;
			break;
		}
	}
	if (a.size() % 2 == 0) {
		ans = a.size() / 2;
	} else {
		if (thereis) ans = a.size() / 2 + 1;
		else ans = a.size() / 2;
	}
	cout << ans << endl;
	return 0;
}