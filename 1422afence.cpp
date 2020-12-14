//Oct/13/2020

#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b) {
            swap(a, b);
        }
        if (b > c) {
            swap(b, c);
        }
        cout << max(1, c - a - b + 1) << endl;
    }
    return 0;
}
