// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	ios_base ::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int arr[10005];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr[x] = i;
	}
	int vasya = 0, petya = 0, q;
	cin >> q;
	while (q--) {
		ll x;
		cin >> x;
		vasya += arr[x] + 1;
		petya += n - arr[x];
	}
	cout << vasya << " " << petya << endl;
	return 0;
}
