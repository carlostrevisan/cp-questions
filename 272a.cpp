// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	string s;
	while (getline(cin, s)) {
		for (int i = 0; i < s.length(); i++) {
			bool open = true;
			if (s[i] == '\"' and open == true) {
				cout << "``";
				open = false;
			} else if (s[i] == '"' and open == false) {
				cout << "''";
				open = true;
			}
			else {
				cout << s[i];
			}
		}
		cout << endl;
	}
}