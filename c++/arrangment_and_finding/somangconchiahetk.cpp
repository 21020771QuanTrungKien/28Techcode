#include <bits/stdc++.h>
#include <algorithm>

#define For(i, a, b) for(int i=a;i<b;i++)
#define aij a[i][j]
#define pii pair<int, int>

using namespace std;
using ll = long long;


int main() {
    int n;
    cin >> n;
    int a[n];
    For(i, 0, n) {
        cin >> a[i];
    }
    map<ll, int> mp;
    ll sum = 0;
    ll ans = 0;
    For(i, 0, n) {
        sum += a[i];
        sum = (sum % n + n) % n;
        if (sum == 0) ans++;
        if (mp.count(sum)) {
            ans += mp[sum];
        }
        mp[sum]++;
    }
    cout << ans;
    return 0;
}
