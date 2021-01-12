//Oct/02/2020

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main (){

	int x = 0;
	string name;

	cin >> name;

	sort(name.begin(), name.end());

	for (int i = 1; i < name.size(); i++)
	{
		if(name[i] != name[i -1]) x++;

	}


	if ((x+1) % 2 == 0) cout << "CHAT WITH HER!";
	else cout<<"IGNORE HIM!";

}
