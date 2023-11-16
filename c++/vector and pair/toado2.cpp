#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int n; cin >> n ;
    pair<pair<int, int>,int> p;
    vector<int> v ;
    for(int i = 0 ; i < n ; i ++) {
        cin >> p.first.first >> p.first.second >> p.second;
        v.push_back(p.first.first + p.first.second + p.second);
    }
    for(auto x : v){
        cout << x << " ";
    } 
}