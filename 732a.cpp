#include <bits/stdc++.h>
using namespace std;

int main(void){
	int k, r, value;
	cin >> k >> r;
	for(int i = 0; i < 10; i++){
		value = k * i;
		if(value % 10 == r or value % 10 == 0){
			if(i != 0){
			cout << i << endl;
			break;
			}
		}	
	}
	return 0;
}
