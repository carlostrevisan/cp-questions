// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    char d;
    cin >> d;
    string a, keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./", newa = "";
    cin >> a;

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < keyboard.size(); j++) {
            if(a[i] == keyboard[j]) {
                if(d == 'L') newa = newa + keyboard[j + 1];
                else if (d == 'R') newa = newa + keyboard[j - 1];
            }
        }
    }

    cout << newa << endl;

    return 0;
}
