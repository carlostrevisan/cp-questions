//Oct/15/2020

#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n, ans = 0;
  int s[12]={4,7,47,74,44,444,447,474,477,777,774,744};

  cin >> n;

  for (int i = 0; i < 12; i++)
  {
    if (n % s[i] == 0)
    {
      ans++;
    }
  }
  if (ans > 0)
  {
    cout << "YES" << endl;
    return 0;
  }
  else
  {
    cout << "NO" << endl;
    return 0;
  }
}
