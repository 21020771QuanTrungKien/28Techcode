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
    set<int> se;
    for(int i = 0 ;i < n ;i++) {
        int x; cin >> x ;
        se.insert(x);
    }
    int q; cin >> q;
    while (q--){
        for (int i = 0 ; i< n ; i++) {
            int x; cin >> x; 
            if (x == 1){
                int y; cin >> y;
                se.insert(y);
            }
            if (x == 2){
                int y; cin >> y;
                if(se.find(y) != se.end()){
                    se.erase(y);
                }
            }
            if (x == 3){
                cout << *se.begin() << endl; 
            }
            if (x == 4){
                cout << *(--se.end())<< endl;
            }

        }
    }
    return 0;
}
