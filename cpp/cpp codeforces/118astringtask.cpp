//Oct/12/2020

#include <bits/stdc++.h>
using namespace std;

int main (){
  string str, ans;
  int size;

  cin >> str;

  size = str.size();

  for (int i = 0; i < size; i++){
    str[i] = tolower(str[i]);

    if (str[i] != 'A' and str[i] != 'a' and str[i] != 'O' and str[i] != 'o' and str[i] != 'Y' and str[i] != 'y' and str[i] != 'E' and str[i] != 'e' and str[i] != 'U' and str[i] != 'u' and str[i] != 'I' and str[i] != 'i'){
      ans =  ans + "." + str[i];
    }
  }

  cout << ans << endl;
  return 0;
}
