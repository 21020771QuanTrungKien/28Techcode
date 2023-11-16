#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int tong(ll n){
    if (n == 1) return n;
    return n*n + tong((n-1)*(n-1));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ll n; cin >> n;
    cout << tong(n);  
    return 0;
}
