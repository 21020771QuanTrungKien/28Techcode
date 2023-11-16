#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    map<int, int> mp;
    int a[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    int cnt = 0;
    int maxx = INT_MIN;
    int max_index = mp.begin()->first;
    for (auto it = mp.begin(); it != mp.end(); it++){
        if (it->second > maxx){
            maxx = it->second;
            max_index = it->first;
        }
    }
    cout << max_index << " " << maxx;
    return 0;
}