#include <bits/stdc++.h>
using namespace std;

int main(){
	int y, w, maior, ans = 0; 
	string fracao;
	cin >> y >> w;
	if(y > w) maior = y;
	else maior = w;
	for(int i = 1; i <= 6; i++){
		if(i >= maior) ans++;
		}
	if(ans == 6) fracao = "1/1";
	else if(ans == 5) fracao = "5/6";
	else if(ans == 4) fracao = "2/3";
	else if(ans == 3) fracao = "1/2";
	else if(ans == 2) fracao = "1/3";
	else fracao = "1/6";
	cout << fracao << endl;
	return 0;
	} 
