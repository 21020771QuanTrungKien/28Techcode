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
    multiset<int> se;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    int t; cin >> t;
    while (t--){
        int x, q; cin >> x >> q;
        if (x == 1){
            se.insert(q);
        }
        else if(x == 2){
            auto it = se.find(q);
            if (it != se.end()){
                se.erase(it);
            }
        }
        else if(x == 3){
            auto it = se.lower_bound(q);
            if (it != se.end()){
            cout << *it << endl ;}
            else cout << -1 << endl;
        }
        else if(x == 4){
            auto it =  se.upper_bound(q);
            if (it != se.begin()){
                it--;
            cout << *it << endl ;}
            else cout << -1 << endl;
        }

    }
    return 0;
}
