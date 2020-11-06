#include <bits/stdc++.h>
using namespace std;

int main () {
    
    int nums;
    int n, sum = 0;
    
    cin >> nums;

    n = nums.length();
    
    for (int i = 0; i < n; ++i)
    {
    	sum = sum + nums[i];
    }

    cout << sum;

}