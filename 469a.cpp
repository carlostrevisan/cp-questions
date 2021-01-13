// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, p, davez;
    cin >> n;
    int ar[n];
    for (int y = 1; y <= n; y++) {
        ar[y] = 0;
    }
    for (int j = 0; j < 2; j++) {
        cin >> p;
        for (int i = 0; i < p; i++) {
            cin >> davez;
            ar[davez] = 1;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(ar[i] == 0) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}
