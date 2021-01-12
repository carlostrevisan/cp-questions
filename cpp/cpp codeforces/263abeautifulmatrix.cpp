//Oct/01/2020

#include<iostream>
#include<string>
#include <cstdlib>
using namespace std;

int main() {

	int x, y;
	
	for (int i = 1; i <= 5; i++) {

    	for (int j = 1; j <= 5; j++) {

    		cin >> x;

    		if (x == 1){
    			y = abs(3 - i) + abs(3 - j);
    			
    		}

	}
}	
	cout << y <<endl;
	return 0;
}
