#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check(int n) {
    if(n == 1 ) return 1;
    else {
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0 ){
                return i;
            }
        }
    }
    return n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        cout << check(i) << endl;
    }
    return 0;
}