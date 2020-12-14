//Sep/30/2020

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x =0, cnt;
    string op;
    
    cin>>cnt;

    for (int i = 0; i < cnt; i++){
        cin>>op;

        size_t foundma = op.find('+');
        if (foundma != string::npos)x++;

        size_t foundme = op.find('-');
        if (foundme != string::npos)x--;


    }cout<<x<<endl;
}
