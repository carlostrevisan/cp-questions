// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
int main() {
	int x;
	string s, l, left, right;
	cin >> s >> l;
	x = s.find("|");
	left = s.substr(0, x);
	right = s.substr(x + 1, s.size());
	for (int i = 0; i < l.size(); i++) {
		if (left.size() >= right.size()) {
			right += l[i];
		}
		else left += l[i];
	}
	if (left.size() == right.size()) {
		cout << left << "|" << right << endl;;
	}
	else cout << "Impossible" << endl;
	return 0;
}