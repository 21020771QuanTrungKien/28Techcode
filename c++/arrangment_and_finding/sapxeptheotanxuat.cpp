#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

typedef pair<int, int> pi;
bool cmp(pi a, pi b){
    if(a.second != b.second) return a.second > b.second;
    else return a.first < b.first;
}
bool cmp1(pi a, pi b){
    return a.second > b.second;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    map<int,int> mp;
    int a[n];
    for(int &x : a){
        cin >> x;
        mp[x]++;
    }
    vector<pi> v;
    for(auto x:mp) v.push_back(x);
    sort(v.begin(),v.end(),cmp);
    for(auto x: v){
        for(auto it = 0; it< x.second; it++){
            cout << x.first << " "; 
        }
    }
    vector<pi> v1;
    for (auto &x:a){
        if(mp[x] != 0){
            v1.push_back(make_pair(x,mp[x]));
        }
        mp[x] = 0;
    }
    cout << endl;
    stable_sort(v1.begin(), v1.end(), cmp1);
    for(auto x: v1){
        for(int i = 0 ; i < x.second; i++){
            cout << x.first << " ";
        }
    }
    return 0;
}

