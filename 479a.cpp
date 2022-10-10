// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main(void)
{
    ll i, ans, a, b, c;
    while (cin >> a >> b >> c)
    {
        ans = a + b + c;
        ans = max(ans, (a * b * c));
        ans = max(ans, (a + b) * c);
        ans = max(ans, a * (b + c));
        ans = max(ans, a + (b * c));
        ans = max(ans, (a * b) + c);
        cout << ans << endl;
    }
    return 0;
}