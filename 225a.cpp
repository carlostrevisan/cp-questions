// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	bool possible = true;
	int n, x, a, b;
	cin >> n >> x;
	while (n--)	{
		cin >> a >> b;
		if (x == a or x == b or x == 7 - a or x == 7 - b) {
			possible = false;
		}
		x = 7 - x;
	}
	cout << (possible ? "YES" : "NO") << endl;
	return 0;
}