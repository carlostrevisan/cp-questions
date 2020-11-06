

#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string s;
  int size = 0;
  bool ans;

  cin >> s;

  size = size + s.size();

  if (s[0] == tolower(s[0]))
  {
    for (int i = 1; i < size; i++)
    {
      if (s[i] == toupper(s[i]))
      {
        s[i] = tolower(s[i])
      }
    }
    cout << s << endl;
    return 0;
  }

}
