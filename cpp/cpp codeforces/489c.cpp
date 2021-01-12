#include <bits/stdc++.h>
using namespace std;

int main (){
	int s, m, sum = 0, d = 0, ds=0, dd=0, min=0, max=0, digits;
	bool minb = true;
	cin >> m >> s;
	if (s == 0){ 
		cout << "-1 -1"; 
		return 0;
	}
	
	for (int i = 0; i < pow(10, m); i++){
		ds = d;
		dd = d;
		sum = 0;
		while (ds != 0){
			sum = sum + ds % 10; 
			ds = ds/10; 
			}
		digits = 0;
		while (dd != 0){
			dd = dd / 10;
			++digits;
			}
		if(digits == m and sum == s){
			if (d > sum) max = d;
			if (minb){
				min = d;
				minb = false;
				}
			}
		cout << " d:" << d << " digits: " << digits << " sum: " << sum << " min: " <<min << " max: "<< max << endl; 
		d++;
		}
	cout << min << " " << max;
	}
	
