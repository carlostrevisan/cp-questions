// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	ll l, r;
	cin >> l >> r;
	if (r - l == 1 or r - l == 0) 
		cout << "-1" << endl;
	else if (r - l == 2) {
		if (l % 2 == 1) cout << "-1" << endl;
		else cout << l << " " << l + 1 
			<< " " << l + 2 << endl;
	}
	else {
		if (l % 2 == 1) l += 1;
		cout << l << " " << l + 1 << " " 
		<< l + 2 << endl;
	}
}