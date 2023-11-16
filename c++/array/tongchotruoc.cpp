#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

typedef long long ll; 

int main(){
    ll n; cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];    
    }
    ll k; cin >> k;
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = i + 1 ; j < n; j++){
            if(a[i] + a[j] == k)
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}