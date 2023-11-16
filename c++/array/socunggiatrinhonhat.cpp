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
    ll min = a[0];    
    for(int i = 0; i < n; i++){
        if (a[i] <= min) min = a[0];
    }    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if (a[i] == min)
        cnt ++;
    }
    cout << cnt;
    return 0;

}