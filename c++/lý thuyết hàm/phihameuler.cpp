#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;
int same(ll n) {
    ll ans = n;
    for(int i = 2; i<=sqrt(n); i++ ){
        if(n%i == 0){
            ans = ans *(1-1.0/i);
            while (n%i == 0){
                n /= i;
            }
        }
    }
    if (n > 1){
        ans = ans - ans / n;
    }
    return ans;
}

int main() {
    int n; cin >> n;
    cout << same(n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}