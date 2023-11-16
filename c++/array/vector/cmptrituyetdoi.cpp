#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool chan(int n){
    return n%2==0;
}

bool le(int n){
    return n%2!=0;
}
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second) 
        return a.first < b.first;
    return a.second < b.second;
}
bool cmp2(int a, int b) {
    if (chan(a) && chan(b)) {
        return a < b;
    } else if (le(a) && le(b)) {
        return a > b;
    } else {
        return chan(a);
    }
}
int main() {
    int n, x; cin >> n >> x;
    vector<pair<int, int>> p(n);
    int b[n];
    for(int i = 0 ; i < n; i++){
        cin >> p[i].first;
        b[i] = p[i].first;
    }
    for(int i = 0 ; i < n; i++){
        p[i].second = abs(p[i].first - x);
    }
    stable_sort(p.begin(),p.end(), cmp);
    for(int i = 0 ; i < n; i++){
        cout << p[i].first << " ";
    }
    cout << endl;
    stable_sort(b,b+n, cmp2);
    for(int i = 0 ; i < n; i++){
        cout << b[i] << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}