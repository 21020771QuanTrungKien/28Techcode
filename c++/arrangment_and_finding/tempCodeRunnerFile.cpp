#include <bits/stdc++.h>

using namespace std;


int main(){
    int n; cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int res = 0, cnt = 0;
    while (int i < n){
        res+=a[i] - cnt;
        cnt++;
    }
    cout << res;
    return 0;
}