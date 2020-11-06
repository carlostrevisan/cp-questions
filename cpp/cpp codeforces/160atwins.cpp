#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a[100], sum=0, ans=0, cnt=0;

    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    sort(a,a+n);

    for(int i = 0; i < n; i++){
        sum+=a[i];
    }

    sum=sum/2;

        while(ans <= sum){
            ++cnt;
            ans+=a[n-cnt];
        }

    cout << cnt << endl;
}
