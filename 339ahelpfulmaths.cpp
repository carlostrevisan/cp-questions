//Oct/01/2020

#include<iostream>
#include<string>
#include <algorithm>
#include <sstream>
using namespace std;

int main() 
{ 
    string s, m;
    int answernumber, n;

    cin >> s;
    
    sort(s.begin(), s.end());
    n = s.size();


    for (int i = 0; i < n; ++i)
    {
    	if (s[i] != '+') {
    		if (i != n-1) cout << s[i] << "+";
    		if (i == n-1) cout << s[i];
    		}
    	}
	
    return 0; 
} 