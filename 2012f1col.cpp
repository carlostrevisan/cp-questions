// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int a[3], h, l;
	cin >> a[0] >> a[1] >> a[2] >> h >> l;
	sort(a, a + 3);
	if (h < l) swap(h, l);
	if (a[0] <= l and a[1] <= h)
		cout << 'S' << endl;
	else cout << 'N' << endl;
	return 0;
}