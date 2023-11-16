#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;        
    }
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    for(int i = 1; i < n ;i++) {
        if(i == 1) cout << 1 << endl;
        else if (i % 2 == 0) cout << 2<< endl;
        else if(check (i)) cout << i << endl;
        else {
            for(int j = 3; j<=sqrt(i); j++) {
                if ((check(j)) && (i%j==0) ) {
                    cout <<j;
                    break;
                }
            }
        } 
    }
    return 0;
}