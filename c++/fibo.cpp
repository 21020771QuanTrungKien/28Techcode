#include <iostream>

using namespace std;

bool fibo(long long n){
    if (n==1 || n == 0) return true;
    long f2 = 0; long f1 = 1;
    long fn;
    for (int i = 2; i< n; i++) {
        fn = f1 + f2;
        if (n = fn) break;
        f2 = f1; 
        f1 = fn;
    }
    return true;
}
int main() {
    long n;
    cin >> n;
    if ( bool(fibo) == true) cout << "YES";
    else cout << "NO";
    return 0;
}