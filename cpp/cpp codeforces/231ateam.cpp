//Sep/02/2020

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int p, a, b, c, d;
	int e = 0;
	cin >> p;

	for (int counter = 0; counter < p;){
		cin >> a >> b >> c;
		d = a + b + c;
			if (d >= 2) {
			e++;}
		counter++;
	}

	cout << e;
};
