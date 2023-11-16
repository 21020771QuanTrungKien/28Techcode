#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
ll check(ll n){
    ll s = 0;
    for(ll i = 1; i <=sqrt(n); i++ ){
        if (n % i == 0) {
            s+=i;
            if(n%i!=i) s+=i;
        }
    }
    return s;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n; cin >> n;
    cout << check(n);
    return 0;
}