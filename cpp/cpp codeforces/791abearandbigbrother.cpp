#include<iostream>
using namespace std;

int main (){

	int a, b;

	cin >> a >> b;

	for (int i = 0; i < 10; ++i)
	{
		a = a*3;
		b = b*2;
		if (a > b) {
			cout << i + 1;
			return 0;
		}
	}

}
