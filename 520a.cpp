#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n = 0, b = 0;
    cin >> n;
    string s, ans = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    transform (s.begin(), s.end(), s.begin(), ::tolower);
    sort (s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        if (s[i] == ans[b]) {
            b++;
        }
    }

    if (b == 26) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
