#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, h, count = 0;
	cin >> n;
	cin >> h;
	int a[n];
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		if (a[i] > h) count = count +2;
		if (a[i] <= h) count++; 
	} 
	cout << count << endl;
	return 0;
}
