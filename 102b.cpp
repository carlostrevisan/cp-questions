
// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	string s;
	ll c = 0, d = 0;
	cin >> s;
	if (s.size() < 2) {
		cout << 0 << endl;
		return 0;
	} else {
		while (true) {
			for (int i = 0; i < s.size(); i++) {
				c += s[i] - '0';
			}
			d++;
			if (c < 10) {
				cout << d << endl;
				return 0;
			}
			s = to_string(c);
			c = 0;
		}
	}
	return 0;
}
