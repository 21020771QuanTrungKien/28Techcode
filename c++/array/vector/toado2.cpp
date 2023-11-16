#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<int,pair<int, int>> a, pair<int, pair<int,int>> b){
   if(a.first != b.first)
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<pair<int,pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second.first >> v[i].second.second;
    }    
    stable_sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}
