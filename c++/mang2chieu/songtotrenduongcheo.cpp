#include <bits/stdc++.h>
#include <algorithm>

#define For(i, a, b) for(int i=a;i<b;i++)
#define pii pair<int, int>

using namespace std;
using ll = long long;

int prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

int main() {
    int n;
    cin >> n ;
    int a[n][n];
    For(i, 0, n) {
        For(j, 0, n) {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    For(i, 0, n) {
        if(prime(a[i][i])){
            cnt++;
            a[i][i] =0;
        }
        if(prime(a[i][n-i-1])){
            cnt++;
            a[i][i] =0;
        }
    }
    cout << cnt;
    return 0;
}
