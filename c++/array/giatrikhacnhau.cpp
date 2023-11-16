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
    ll cnt;
    for(ll i = 0; i < n; i++){
        if (a[i] > 0){
            for(ll j = i+1 ; j < n; j++){
                if(a[i] == a[j]){
                    a[j] = -1;
                }
            }
        cout << a[i] << " ";
        }
    }
    return 0;
}