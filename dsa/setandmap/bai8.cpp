#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    int a[n];
    set<int> se;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    int q; cin >> q;
    while(q--){
        int tt;
        cin >> tt;
        if (tt == 1){
            int x; cin >> x;
            se.insert(x);
        }
        else if(tt == 2){
            int x; cin >> x;
            se.erase(x);
        }
        else if(tt == 3){
            auto it = se.begin();
            cout << *it << endl;
        }
        else {
            auto it=se.rbegin();
            cout << *it << endl;
        }
    }
    return 0;
}