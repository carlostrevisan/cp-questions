#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n = 0, ans = 0;
    cin >> n;
    ll a[n];

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort (a, a + n);

    for (ll i = 1; i < n - 1; i++) {
        if (a[0] < a[i] and a[n - 1] > a[i]) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
