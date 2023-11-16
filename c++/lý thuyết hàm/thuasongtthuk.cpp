#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long check(long long n, int k) {
    int cnt = 0;
    for (long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0) {
            while(n % i == 0) {
                n /= i;
                cnt++;
            }
        }
        if (cnt == k) return i;
    }
    if (n>1) {
        cnt++;
        
    }
    return -1;
}
int main() {
    long long n; cin >> n;
    long long k; cin >> k;
    cout << check(n, k); 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}