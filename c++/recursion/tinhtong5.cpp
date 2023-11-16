#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
double tong(ll n){
    if (n == 1) return 1;
    return 1.0/n + tong(n-1);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ll n; cin >> n;c                                     
    cout << (double)tong(n);  
    return 0;
}
