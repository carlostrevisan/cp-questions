// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main()
{
	long long n;
	cin >> n;
	long long a[200000];
	long long i, j;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long l = 0;
	long long r = n - 1;
	for (i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			l = i;
			break;
		}
	}
	for (i = (l + 1); i < n; i++) {
		if (a[i] > a[i - 1]) {
			r = (i - 1);
			break;
		}
	}
	i = l;
	j = r;
	while (i < j) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
	bool is = true;
	for (i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			is = false;
			break;
		}
	}
	if (is == true) {
		cout << "yes" << endl;
		cout << l + 1 << " " << r + 1 << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}