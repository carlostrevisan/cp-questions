#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
    int n = 0;
    cin >> n;
    int a[n + 1], newa[n + 1];

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        newa[a[i]] = i;
    }

    for (int t = 1; t <= n; t++) {
        cout << newa[t] << " ";
    }

    return 0;
}
