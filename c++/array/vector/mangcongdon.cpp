#include <bits/stdc++.h>

using namespace std; 

int main(){
    int n; cin >> n;
    int a[n+1];
    int prefix[n+1] = {0};
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    prefix[0] = a[0];
    for(int i = 1; i< n; i++){
        prefix[i]= prefix[i-1] + a[i];
    }
    int t; cin >> t;
    while (t--){
    int l, r;
    cin >> l >> r;
    --l;
    --r;
    cout << prefix[r] - prefix[l-1];}
    return 0;
}