
// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, i = 0;
	string arr = "ROYGBIV";
	cin >> n;
	if (n == 7) {
		cout << "ROYGBIV" << endl;
		return 0;
	} else {
		while (n--) {
			cout << arr[i];
			i++;
			if (i == 7) {
				i = 3;
			}
		}
	}
	cout << endl;
	return 0;
}
