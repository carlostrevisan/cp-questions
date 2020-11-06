//Sep/30/2020

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, k, cnt = 0, y;
    cin >> n >> k;
	  int s[n+1];

    for (int i = 0; i < n; i++){
    	cin >> s[i];
    }

    for (int i = 0; i < n; ++i)
    {
      if (s[i] >= s[k-1] && s[i] > 0) cnt++;
      else if (s[i] == s[k-1] && s[i] > 0) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
