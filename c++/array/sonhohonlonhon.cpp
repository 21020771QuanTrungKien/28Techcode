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
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll x; cin >> x;
    ll cnt1 = 0;
    ll cnt2 = 0;
    for(int i = 0; i < n; i++){
        if (a[i] <= x){
            cnt1++;
        } 
        if (a[i] >= x){
            cnt2++;
        }
    }
    cout << cnt1 << "\n" << cnt2;
    return 0;  
}