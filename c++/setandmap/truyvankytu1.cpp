#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
#define For(i,a,b) for(int i = a; i < b; i++);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n ; cin >> n;
    set<int> se;
    For(i, 0 , n) {
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        auto it = se.find(x);
        if(it == se.end()) {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}