// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	string a;
	bool espaco = false;
	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 'W' and a[i + 1] == 'U' and a[i + 2] == 'B') {
			if (espaco) {
				cout << " ";
				espaco = false;
			}
			i += 2;
		} else {
			cout << a[i];
			espaco = true;
		}
	}
	return 0;
}
