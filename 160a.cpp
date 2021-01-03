#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n = 0, sum = 0, ans = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort (a, a + n, greater<int>());

    for (int i = 1; i <= n; i++) {
        ans += a[i - 1];

        if (ans > sum / 2) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
