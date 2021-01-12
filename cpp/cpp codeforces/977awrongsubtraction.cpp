#include <iostream>
using namespace std;

int main (){

	int n, k;

	cin >> k >> n;

	for (int i = 1; i <= n; i++){

		if (k % 10 == 0) k = k/10;
		else k--;

	}
	
	cout << k;
}