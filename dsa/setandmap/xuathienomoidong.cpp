#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<int,int> mp;
    set<int> se;
    int a[n];
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < n; j++){
            int x; cin >> x;
            if(i == 0) {
                mp[x] = 1;
            }
            else {
                if(mp[x] == i) {
                    mp[x] = i + 1;
                    if(i == n - 1) {
                        se.insert(x);
                    } 
                }
            }
        }
    }
    if (se.empty()) {
        cout << "NOT FOUND";
    }
    else {
        for(auto x:se){
            cout << x << " ";
        }
    }
    return 0;
}