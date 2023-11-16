#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ms.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        //tim so lon nhat <= x trong ms
        //>x
        auto it = ms.upper_bound(x);
        if(it != ms.begin()){
            --it;
            cout << *it << endl;
            ms.erase(it);
        }
        else{
            cout << "-1\n";
        }
    }
}