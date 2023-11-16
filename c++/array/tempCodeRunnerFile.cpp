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
    ll max = 0;
    int tmp;
    for(ll i = 0; i < n; i++){
        cnt = 1;
            for(ll j = i+1 ; j < n; j++){
                if(a[i] == a[j]){
                    cnt ++;
                }
                if (cnt > max){
                    tmp = a[i];
                    max = cnt;
                }
            }
        }
    cout << tmp << " " << max;
    return 0;
}