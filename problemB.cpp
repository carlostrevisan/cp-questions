#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, total = 0, o;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> o;
        if (o > h)
        {
            total += 2;
        }
        else
        {
            total++;
        }
    }
    cout << total << endl;
}