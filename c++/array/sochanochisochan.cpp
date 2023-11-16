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
        cin >> a[i] ;
    }
    ll cnt = 0;
    for(ll i = 0; i < n; i+=2){
        if (a[i] % 2 == 0) {
            cout << a[i] << "-";
            cnt = 1;
        }
    }
    if (cnt = 0) cout << "NONE";
    return 0;  
}