#include <bits/stdc++.h>

using namespace std;
char * removeDuplicate(char str[], int n) {
  int index = 0;
  for (int i = 0; i < n; i++) {
    int j;
    for (j = 0; j < i; j++)
      if (str[i] == str[j])
        break;

    if (j == i)
      str[index++] = str[i];
  }
  return str;
}

int main() {
  int t, n;
  string a = "trygub", b, newb = "", newa = "";
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> b;
    for (int i = 0; i < b.length(); i++) {
      if (b[i] == 't' || b[i] == 'r' || b[i] == 'y' || b[i] == 'g' || b[i] == 'u' || b[i] == 'b') {
        if (newb.find(b[i]) != string::npos == false) newb += b[i];
      }
    }
    if (b.find(a) != std::string::npos or newb.find(a) != std::string::npos) {
      for (int n = b.length() - 1; n >= 0; n--) {
        newa.push_back(b[n]);
      }
      cout << newa << endl;
    } else {
      cout << b << endl;
    }
    newb = "";
    newa = "";
  }
  return 0;

}
