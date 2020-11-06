//Sep/30/2020

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    int i;
    cin>>s1>>s2;

    for(i=0;i<s1.length();i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }

    if(s1==s2) cout<<"0"<<endl;
    else if (s1>s2) cout<<"1"<<endl;
    else if (s1<s2) cout<<"-1"<<endl;

    return 0;
}
