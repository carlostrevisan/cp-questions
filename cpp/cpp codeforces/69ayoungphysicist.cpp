//Oct/10/2020

#include <iostream>
using namespace std;

int main(){
  int n, ansx = 0, ansy = 0, ansz = 0;

  cin >> n;

  int x[n], y[n], z[n];

  for (int i = 0; i < n; i++){
    cin >> x[i] >> y[i] >> z[i];
  }

  for (int i = 0; i < n; i++){
    ansx = ansx + x[i];
  }

  for (int i = 0; i < n; i++){
    ansy = ansy + y[i];
  }

  for (int i = 0; i < n; i++){
    ansz = ansz + z[i];
  }

  if (ansx == 0 and ansy == 0 and ansz == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}
