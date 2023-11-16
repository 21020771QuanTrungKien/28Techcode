#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int b[m];
    set<int> seA,seB,se;
    for(int i = 0 ; i< n; i++){
        int x; cin >> x; 
        seA.insert(x);
        seB.insert(x);
    }
    for(int &x : b){
        cin >> x;
        seB.insert(x);
    }
    for(int i = 0 ; i < m ;i++){
        auto it = seA.find(b[i]);
        if(it != seA.end()){
            se.insert(b[i]);
            seB.insert(b[i]);
            seA.erase(b[i]);
        }
    }
    for (auto x:se){
        cout << x << " ";
    }
    cout << endl;
    for (auto x:seB){
        cout << x << " ";
    }
    return 0;
}