
// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	string s[3];
	int score[3] = {0, 0, 0};
	for (int i = 0; i < 3; i++) {
		cin >> s[i];
		if (s[i][1] == '>') {
			if (s[i][0] == 'A') score[0]++;
			if (s[i][0] == 'B') score[1]++;
			if (s[i][0] == 'C') score[2]++;
		}
		if (s[i][1] == '<') {
			if (s[i][2] == 'A') score[0]++;
			if (s[i][2] == 'B') score[1]++;
			if (s[i][2] == 'C') score[2]++;
		}
		//cout << score[0] << score[1] << score[2] << endl;
	}
	if (score[0] == score[1] or score[1] == score[2] or
	    score[0] == score[2]) {
		cout << "Impossible" << endl;
		return 0;
	}
	if (score[0] == 0) cout << 'A';
	if (score[1] == 0) cout << 'B';
	if (score[2] == 0) cout << 'C';

	if (score[0] == 1) cout << 'A';
	if (score[1] == 1) cout << 'B';
	if (score[2] == 1) cout << 'C';

	if (score[0] == 2) cout << 'A' << endl;
	if (score[1] == 2) cout << 'B' << endl;
	if (score[2] == 2) cout << 'C' << endl;
	return 0;
}
