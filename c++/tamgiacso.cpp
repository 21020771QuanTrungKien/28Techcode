#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void vehinh(int n) {
    for (int i =1; i<=n-1 ; i++) {
        for (int j=1; j<=n-i; j++ ) {
            cout << "  ";
        }
        for (int j=1; j<=2*i-1;j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i-1; j++) {
            cout << "  ";
        }
        int cnt =i;
        for (int j = 1; j <= 2*(n-i+1)-1; j++) {            
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    vehinh(n);
    return 0;
}
