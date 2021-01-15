
// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n;
	cin >> n;
	if (n == 0) cout << 1;
	else if (n % 4 == 1) cout << 8;
	else if (n % 4 == 2) cout << 4;
	else if (n % 4 == 3) cout << 2;
	else if (n % 4 == 0) cout << 6;
	return 0;
}

/*
"The only thing necessary for the triumph 
of evil is for good men to do nothing" 
— Edmund Burke
*/