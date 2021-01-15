// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	ll n, m, a;
	cin >> n >> m >> a;
	if (n % a != 0) n = (n / a) + 1;
	else n /= a;
	if (m % a != 0) m = (m / a) + 1;
	else m /= a;
	cout << n * m << endl;
	return 0;
}