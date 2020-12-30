#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, feitas = 0, tempogasto = 1, t, k, d, anscom, anssem;
	cin >> n >> t >> k >> d;
	while(feitas <= n){
		if(tempogasto % t == 0)feitas += k;
		if((tempogasto - d) % t == 0 and tempogasto > d)feitas += k;
		if(feitas >= n){
			anscom = tempogasto;
			break;
			}
		tempogasto++;
		}
	feitas = 0;
	tempogasto = 1;
	while(feitas <= n){
		if(tempogasto % t == 0)feitas += k;
		if(feitas >= n){
			anssem = tempogasto;
			break;
			}
		tempogasto++;
		}
	if(anscom < anssem) cout << "YES" << endl;
	if(anscom >= anssem) cout << "NO" << endl;
	return 0;
	}

