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
    for(int i = 0 ; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
     int l, r;
    cin >> l >> r;
    for (auto it = v.begin() + l; it <= v.begin() + r; it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = v.begin() + r; it >= v.begin() + l; it--) {
        cout << *it << " ";
    }
    return 0;
}
