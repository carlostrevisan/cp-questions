// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	int a[2], b[2];
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			for (int y = 1; y < 10; y++) {
				for (int x = 1; x < 10; x++) {
					if (i != j and
					        i != y and
					        i != x and
					        j != y and
					        j != x and
					        y != x) {
						a[0] = i;
						a[1] = j;
						b[0] = y;
						b[1] = x;
						if (a[0] + a[1] == r1 and
						        b[0] + b[1] == r2 and
						        a[0] + b[0] == c1 and
						        a[1] + b[1] == c2 and
						        a[0] + b[1] == d1 and
						        a[1] + b[0] == d2) {
							cout << a[0] << " " << a[1] << endl << b[0] << " " << b[1] << endl;
							return 0;
						}
					}
				}
			}
		}
	}
	cout << -1 << endl;
	return 0;
}