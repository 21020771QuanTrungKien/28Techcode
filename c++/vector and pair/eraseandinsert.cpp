#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i< n ; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int q; cin >> q;
    while (q--){
        int t; cin >> t;
        if(t == 1){
            int x,y; cin >> x >> y;
            v.insert(v.begin() + x , y);
        }
        else {
            int x,y; cin >> x;
            v.erase(v.begin() + x);
        }
    }
     if (!v.empty()) {
        for (int x: v) {
            cout << x << " ";
        }
    } else
        cout << "EMPTY";
    return 0;
}
