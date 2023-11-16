#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    int sa = a.first * a.first + a.second * a.second;
    int sb = b.first * b.first + b.second * b.second;
    if (sa != sb) {
        return a < b;
    }
    else {
        if(a.first != b.first){
            return a.first < b.first;
        }
        else
            return a.second < b.second;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }    
    stable_sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}
