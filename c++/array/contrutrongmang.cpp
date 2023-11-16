#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){
    ll n; cin >> n;
    ll a[n], b[n-1];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 0; i< n-1; i++){
        cin >> b[i];
    }
    ll s = a[0];
    for(ll i = 0; i < n-1; i++){
        if (b[i] == 1) s+= a[i+1];
        else s-=a[i+1];
    }
    cout << s;
    return 0;
}