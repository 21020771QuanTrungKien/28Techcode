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
    for (int i = 0 ; i <n; i++){
        cin >> a[i];
        mp[a[i]] = i;
    }
    int cnt = 1;
    for (int i = 1; i <= n; i++){
        if(mp[i] < mp[i-1]){
            cnt++;
        }
    }
    //cout << cnt;

    for(auto x: mp){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}