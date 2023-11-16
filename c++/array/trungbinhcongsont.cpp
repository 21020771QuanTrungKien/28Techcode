#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

bool prime(long long n){
    for(long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0 ) return false;
    }
    return (n > 1);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n; cin >> n;
    int cnt = 0;
    long long s = 0;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(prime(a[i])) {
            s+=a[i];
            cnt++;
        }
    }
    cout << fixed << setprecision(3) << (double)s / cnt ;
    return 0; 
}