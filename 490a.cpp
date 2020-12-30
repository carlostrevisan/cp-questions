#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int n, t1[5002], t2[5002], t3[5002], x = 0, y = 0, z = 0, w, xy;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    for (int i = 0; i < n; i++) {
        if (t[i] == 1) {
            t1[x] = i + 1;
            x++;
        }
        if (t[i] == 2) {
            t2[y] = i + 1;
            y++;
        }
        if (t[i] == 3) {
            t3[z] = i + 1;
            z++;
        }
    }
    xy = min (x, y);
    w = min (xy, z);
    cout << w << endl;
    for (int i = 0; i < w; i++) {
        cout << t1[i] << " " << t2[i] << " " << t3[i] << endl;
    }
    return 0;
}
