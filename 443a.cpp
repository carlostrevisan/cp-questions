#include <bits/stdc++.h>

using namespace std;
int main(){
    set<char> c;
    string s;
    int i;
    getline(cin, s);
    while(s[i]){
        if(isalpha(s[i]))
            c.insert(s[i]);
        i++;
    
    }
    cout<<c.size()<<endl;
    return 0;
}
