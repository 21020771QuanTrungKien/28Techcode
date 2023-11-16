#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(long n){
    int mu = 0;
    for(long long i = 2; i<= sqrt(n); i++) {
        if (n % i == 0){
            mu = 0;
            while (n % i == 0){
                n /= i;
                mu++;
            }
        }
    }
     if (mu > 1) return true;
    return false;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long a, b;
    cin >> a >> b;
    for (long long i = a; i <= b; i++){
        if(check(i)) cout << i << " ";
    }
    return 0 ;
}