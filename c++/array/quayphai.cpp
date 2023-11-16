#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

typedef long long ll; 

int main(){
    ll n, p; cin >> n >> p;
    ll a[n];
    if(p > n) {
        p%=n;
    }
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }

    for (ll i = n-1; i >p; i--){
        cout << a[i] << " "; 
    }
    for (ll i = 0; i <= p; i++){
        cout << a[i] << " ";
    }   
    return 0;
}