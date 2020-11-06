//Oct/10/2020

#include <iostream>
#include <string>
using namespace std;

int main(){
  int n, t;
  string s;

  cin >> n >> t;

  cin >> s;

  for (int i = 0; i < t; i++){
    for (int i = 1; i < n;){
      if (s[i] == 'G' and s[i - 1] == 'B'){
        s[i] = 'B';
        s[i-1] = 'G';
        i = i+2;
      } else i++;
    }
  }

  cout << s << endl;
}
