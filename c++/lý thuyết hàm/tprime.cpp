#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool check(long long n) {
    if (n < 2) return false;
    for (int i = 2 ; i <= sqrt(n) ; i++) {
        if ( n%i == 0) return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    for (long long i=2 ; i*i<=n ; i++) {
        if (check(i)) cout << i*i << " ";
    }
    return 0;
}