#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int prefixsum[n] = {0};
    for(auto &x:a) cin >> x;
    for(int i = 1; i <= n; i++){
        prefixsum[0] = a[0];
        prefixsum[i] = prefixsum[i-1] + a[i];
    }
    int x; cin >> x;
    while(x--){
        int l, r;
        cin >> l >> r;
        cout << prefixsum[r] - prefixsum[l-1] << endl;

    }
    return 0;
}