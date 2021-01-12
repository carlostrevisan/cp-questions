//Oct/12/2020

#include <bits/stdc++.h>
using namespace std;

int main (){
  string str;

  cin >> str;

  for (int i = 7; i <= str.size(); i++){
    if (str[i-1] == '1' and str[i-2] == '1' and  str[i-3] == '1' and str[i-4] == '1' and str[i-5] == '1' and str[i-6] == '1' and str[i-7] == '1'){
      cout << "YES";
      return 0;
    }
    else if (str[i-1] == '0' and str[i-2] == '0' and  str[i-3] == '0' and str[i-4] == '0' and str[i-5] == '0' and str[i-6] == '0' and str[i-7] == '0'){
      cout << "YES";
      return 0;
    }
  }

  cout << "NO" << endl;
}
