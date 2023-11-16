#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n; i++){
        int x; cin >> x ;
        v.push_back(x);
    }
    int l, r; cin >> l >> r;
    reverse(v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    reverse(v.begin()+ l, v.begin() + r + 1);
    for (auto x: v){
        cout << x << " ";
    }
    return 0;
}