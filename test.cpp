#include <bits/stdc++.h>
using namespace std;

int main () {
    int x, t, n, d, ans = 0;
    cin >> t;
    while (t--) {
        cin >> x;
        n = ((x % 10) - 1) * 10;
        for (int i = 0; i < 1; i++) {
            if (x > 1000) {
                ans = n + 10;
                cout << ans << endl;
                break;
            }
            if (x > 100) {
                ans = n + 6;
                cout << ans << endl;
                break;
            }
            if (x > 10) {
                ans = n + 3;
                cout << ans << endl;
                break;
            } else {
                ans = n + 1;
                cout << ans << endl;
                break;
            }
        }
    }
}