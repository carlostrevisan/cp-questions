//Oct/02/2020

#include<iostream>
using namespace std;

int main(){
	int k, n, w, custo = 0, divida;

	cin >> k >> n >> w;

	for (int i = 1; i <= w; i++){
	custo = custo + k * i;
	}

	if (custo>n)
	{
		divida = n - custo;
		divida = abs(divida);
		cout<<divida;
	} else cout<<"0"<<endl;


}
