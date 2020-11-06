//Oct/10/2020

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  string s, n;
  int x, upper = 0, lower = 0;

  cin >> s;

  x = s.size();

  for (int i = 0; i < x; i++){
    if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
      else if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
  }

  if (lower >= upper){
    for (int i = 0; i < x; i++){
      s[i] = tolower(s[i]);
    }
  }

  if (upper > lower){
    for (int i = 0; i < x; i++){
      s[i] = toupper(s[i]);
    }
  }

  cout << s << endl;
}
