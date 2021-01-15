// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, ans= 0;
	string a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == "Tetrahedron") ans += 4;
		if (a == "Cube") ans += 6;
		if (a == "Octahedron") ans += 8;
		if (a == "Dodecahedron") ans += 12;
		if (a == "Icosahedron") ans += 20;
	}
	cout << ans << endl;
	return 0;
}