// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n = 0, na = 0, nb = 0;
    cin >> n;
    string ar[n], a, b;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        a = ar[0];
        if (ar[i] != a) {
            b = ar[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (ar[i] == a) na++;
        if (ar[i] == b) nb++;
    }
    if (na > nb) cout << a << endl;
    if (nb > na) cout << b << endl;
    return 0;
}

