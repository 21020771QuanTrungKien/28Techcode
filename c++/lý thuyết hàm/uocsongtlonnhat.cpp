#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check(long n){
    long long max0 = 0;
    for(long long i = 2; i<= sqrt(n); i++) {
        if (n % i == 0){
            while (n % i == 0){
                n /= i;
            }
        }
        max0 = max(i,max0);
    }
    if (n > 1) max0 = n;
    return max0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    while (n--){
        int x; cin >> x;
        cout << check(x)<< endl;
    } 
    return 0;
}