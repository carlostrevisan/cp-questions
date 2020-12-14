//Oct/14/2020

#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, a, ans = 0;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> a;
    ans = ans + a;

    if (1000000 <= ans) {
      cout << i << endl;
      return 0;
    }
  }
}
