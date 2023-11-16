#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<ll, int> mp;
    ll l = 0;
    ll ans = 0;
    for(int r = 0; r < n; r++){
        mp[a[r]]++;
        while(mp.size() > k){
            mp[a[l]]--;
            if(mp[a[l]] == 0) mp.erase(a[l]);
            ++l;
        }
        ans += r - l + 1;
    }
    cout << ans << endl;
}