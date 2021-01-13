// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n = 0;
    cin >> n;
    int before[n + 1], after[n + 1];
    bool changed = false, notorder = false;
    for (int i = 0; i < n; i++) {
        cin >> before[i] >> after[i];
        if (before[i] != after[i]) {
            changed = true;
        }
        if (i >= 1) {
            if (before[i] > before[i - 1]) {
                notorder = true;
            }
        }
    }
    if (changed) {
        cout << "rated" << endl;
        return 0;
    } else if (notorder) {
        cout << "unrated" << endl;
        return 0;
    } else {
        cout << "maybe" << endl;
    }
    return 0;
}
