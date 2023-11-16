#include <bits/stdc++.h>

using namespace std;

bool tn(int n) {
    long long s = 0, m = n;
    while (n) {
        s = s * 10 + n % 10;    // 1 2 3 3 2 1 
        n /= 10;                // s = 1 2 3 3 2 1
    }
    return m == s;
}


int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int res = 0;
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j <=i; j++){
            if(tn(a[i][j])) res++;
        }
    }
    cout << res ;
    return 0;
}