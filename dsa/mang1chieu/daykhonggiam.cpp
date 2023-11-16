#include <bits/stdc++.h>

using namespace std;

bool khonggiam(int n){
    int max = n % 10;
    while(n){
        if(n% 10 <= max){
            max = n % 10;
            n/=10;
        }
        else if(n % 10 > max) return false;
    }
    return true;
}

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second)
        return a.second >b.second;
    else return a.first < b.first;
}
int main(){
    int n;
    map<int,int> mp;
    while(cin >> n){
        if(khonggiam(n)){
            mp[n]++;
        }
    }
    vector<pair<int,int>> v;
    for(auto x:mp){
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x: v){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}