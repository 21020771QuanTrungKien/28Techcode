#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// tra ve vi tri cuoi cung cua phan tu <= x
int findPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] <= x){
            res = m;
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int ans = 1;
    for(int i = 0; i < n; i++){
        // a[i] => a[i] + k
        int res = findPos(a, i + 1, n - 1, a[i] + k);
        if(res != -1){
            ans = max(ans, res - i + 1);
        }
    }
    cout << ans << endl;
}