#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int  n , res = 0  ;
 cin>>n;

while (n - 5 >= 0) {
  n = n - 5;
  res++;
}
while (n - 4 >= 0) {
  n = n - 4;
  res++;
}
while (n - 3 >= 0) {
  n = n - 3;
  res++;
}
while (n - 2 >= 0) {
  n = n - 2;
  res++;
}
while (n - 1 >= 0) {
  n = n - 1;
  res++;
}
 cout<<res<<endl;
}
