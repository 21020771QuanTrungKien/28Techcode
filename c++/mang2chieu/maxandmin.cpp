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
    int n, m;
    cin >> n >> m;
    int a[n][m];
    long long maxx = a[0][0], minn = a[0][0];
    For(i, 0, n) {
        For(j, 0, m) {
            cin >> a[i][j];
            minn = min(minn, a[i][j]);
            maxx = max(maxx, a[i][j]);
        }
    }
    cout << minn;
    For(i, 0, n) {
        For(j, 0, m) {
            if(a[i][j] == minn){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
    cout << endl;
    cout << maxx;
    For(i,0,m){
        For(j,0,n){
            if(a[i][j] == maxx){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    return 0;
}
