#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m ; cin >> n >> m;
    int a[n],b[m];
    set<int> seB, seA, res;
    for(int i = 0 ;i < n ; i++){
        cin >> a[i];
        seA.insert(a[i]);
    }
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
        seB.insert(b[i]);
    }
    for(int i = 0 ; i <n ; i++){
        if(seB.count(a[i]) == 0) res.insert(a[i]);
    }

    for(int i = 0 ; i <m ; i++){
        if(seA.count(b[i]) == 0) res.insert(b[i]);
    }
    for (auto it:res){
        cout << it << " ";
    }
    return 0;
}