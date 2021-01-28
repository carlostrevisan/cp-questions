// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
    int n, t, c;
    cin >> n >> t;
    for (int i = 0; i < t; i++) {
    	if (n < 1000) c = n / 100;
    	else c = n / 200;
    	n += c * 10;
    	cout << n << endl;
    }
    cout << "Final: " << n << endl;
    return 0;
}