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
    ll min = abs(a[1] - a[0]); 
    for(ll i = 0; i < n; i++){
        for(ll j = i + 1 ; j < n; j++){
            if(abs(a[i] - a[j]) < min)
            min = abs(a[i] - a[j]);
        }
    }
    cout << min;
    return 0;
}