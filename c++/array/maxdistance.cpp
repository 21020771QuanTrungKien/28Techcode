#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    map<int, int> pos;
    int ans = -1;
    for(int i = 0; i < n; i++){
        //a[i]
        if(pos.find(a[i] + k) != pos.end()){
            ans = max(ans, i - pos[a[i] + k]);
        }
        if(pos.find(a[i] - k) != pos.end()){
            ans = max(ans, i - pos[a[i] - k]);
        }
        if(pos.find(a[i]) == pos.end()){
            pos[a[i]] = i;
        }
    }
    cout << ans << endl;
}