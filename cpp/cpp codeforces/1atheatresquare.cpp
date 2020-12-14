//Oct/10/2020

//HELLO GITHUB

#include <iostream>
using namespace std;

int main(){
  long long n, m, a, val1, val2;

  cin >> n >> m >> a;

  if (m % a == 0) val1 = m/a;
  else val1 = m/a+1;

  if (n % a == 0) val2 = n/a;
  else val2 = n/a+1;

  cout << val1 * val2 << endl;
  return 0;
}
