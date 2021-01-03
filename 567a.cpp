#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll MAX_LL = 2e18;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        long long mini;
        long long maxi;

        if (i == 0) {
            mini = abs (arr[i] - arr[i + 1]);
            maxi = abs (arr[i] - arr[n - 1]);
        }
        else
            if (i == n - 1) {
                maxi = abs (arr[i] - arr[0]);
                mini = abs (arr[i] - arr[i - 1]);
            }
            else {
                mini = min (abs (arr[i] - arr[i + 1]), abs (arr[i] - arr[i - 1]));
                maxi = max (abs (arr[i] - arr[0]), abs (arr[i] - arr[n - 1]));
            }

        cout << mini << " " << maxi << "\n";
    }

    return 0;
}
