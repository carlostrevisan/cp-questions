//Aug/30/2020

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	int height;
	cin >> height;
	if (height == 2){
		cout << "NO";
		return 0;
	}
	if (height % 2 == 0){
		cout << "YES";
	} else {
		cout << "NO";
	}
}
