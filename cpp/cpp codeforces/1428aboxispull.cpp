#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main ()
{
  int t, x, y, a, b, dis;

  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    cin >> x >> y >> a >> b;

    dis = abs(x - a) + abs(y - b);

    if (dis >= 2) dis = dis + 2;

    cout << dis << endl;
  }
}
