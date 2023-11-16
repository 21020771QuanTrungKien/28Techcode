#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m ; cin >> n >> m;
    int a[n];
    set<int> seA, res;
    for(int i = 0 ;i < n ; i++){
        cin >> a[i];
        seA.insert(a[i]);
    }
    for(int i = 0 ; i < m ; i++){
        int x; cin >> x;
        if(seA.count(x) != 0) res.insert(x); 
    }
    for(int i = 0 ; i < n; i++){
        if(res.count(a[i]) == 1){
            cout << a[i] << " ";
            res.erase(a[i]);
        }
    }
    return 0;
}