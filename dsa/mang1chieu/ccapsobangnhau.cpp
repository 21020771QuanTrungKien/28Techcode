#include <bits/stdc++.h>

using namespace std;
using ll = long long;

long long combination(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    if (k > n) {
        return 0;
    }
    
    long long result = 1;
    for (int i = 1; i <= k; i++) {
        result *= (n - i + 1);
        result /= i;
    }
    
    return result;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    unordered_map<int,int> mp;
    for(auto &x: a){
        cin >> x;
        mp[x]++;
    }
    long long res =0;
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second >= 2){
            res+= combination(it->second,2);
        }
    }
    cout << res;
}