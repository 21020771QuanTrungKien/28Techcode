#include <bits/stdc++.h>
#include <algorithm>

#define For(i, a, b) for(int i=a;i<b;i++)
#define pii pair<int, int>
using namespace std;
using ll = long long;

int chen(int n, int x) {
    return n * 10 + x;
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n+2];
    For(i, 1, n+1) {
        cin >> a[i];
    }
    ll tong[n+2];
    tong[0]=0;
    for (int i = 1; i <= n; i++) {
        tong[i] = tong[i - 1] + a[i];
    }
    //for(int i = 0; i <=n; i++) cout << tong[i] <<' ';
    int minn=INT_MAX;
    
    int ok  = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i ; j <= n; j++) {
            if (tong[i] == 0){
                ok = 1;
            }
        }
    }

    if (minn==INT_MAX) cout << -1;
    else cout<<minn;
}