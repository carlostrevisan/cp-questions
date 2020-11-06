//Oct/08/2020

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string n, ans;
  int q=0, s=0, y, x = 0;

  cin >> n;

  y = n.size();

  for (int i = 0; i < y; i++) {
    if (n[i] == '7') x++;
    if (n[i] == '4') x++;
  }

 if (x == 4) cout << "YES";
 if (x == 7) cout << "YES";
 if (x != 4 and x != 7) cout << "NO";

}
