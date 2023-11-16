#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; cin >> n;
    int a[n];
    vector<int> v;
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        if (a[i] != 0) v.push_back(a[i]);
    }  
    sort(a,a+n);
    int cnt = 0;
    for (int i = 0 ; i < n; i++){
        if (a[0] != 0) break;
        if (a[i] != 0){
            cnt = i+ 1;
            break;
        }
    }
    for(auto x: v){
        cout << x << " ";
    }
    long long res = v.size();
    for(int i = 1 ; i < cnt; i++){
        v.push_back(0);
    }
    for (auto it = v.begin()+ res ; it != v.end(); it++){
        cout << *it << " ";
    }
    return 0;
}