//Oct/15/2020

#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n, p, q, ans = 0;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> p >> q;
    if (q - p >= 2) ans++;
  }
  cout << ans << endl;
}