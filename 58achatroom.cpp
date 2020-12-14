#include <bits/stdc++.h>
using namespace std;

int main () {
  string s, ans = "hello";
  int a = 0, b = 0;

  cin >> s;

  for (int i = 0; i < s.size(); i++){
    if (s[i] == ans[b]){
      b++;
      a++;

      if (a == 5) break;
    }
  }

  if (a == 5) {
    cout << "YES" << endl;
  } else cout << "NO" << endl;
}
