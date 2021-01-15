// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
    int n, m, d;
    cin >> n >> m;
    for (int j = n + 1; j <= 2 * n + 1; j++) {
        d = 0;
        for (int i = 1; i <= j; i++) {
            if (j % i == 0) {
                d++;
            }
            if (i == j and d == 2) {
                if (j == m)cout << "YES" << endl;
                else cout << "NO" << endl;
                return 0;
            }
        }
    }
    return 0;
}