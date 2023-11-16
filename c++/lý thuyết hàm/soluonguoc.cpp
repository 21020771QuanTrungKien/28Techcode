#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
ll check(ll n){
    ll cnt = 1;
    for(ll i = 1; i <= sqrt(n); i++ ){
        if (n % i == 0) {
            cnt ++;
            if(n/i!=i) cnt++;
        }
    }
    return cnt;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n; cin >> n;
    cout << check(n);
    return 0;
}