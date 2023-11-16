#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m ; cin >> n >> m;
    int a[n];
    set<int> seB, res;
    for(int i = 0 ;i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i++){
        int x; cin >> x;
        seB.insert(x);
    }
    for(int i = 0 ; i <n ; i++){
        if(!seB.find(a[i])) res.insert(a[i]);
    }
    for (auto it:res){
        cout << it << " ";
    }
    return 0;
}