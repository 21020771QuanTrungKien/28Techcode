#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m; cin >> n >> m;
    int a[n], b[m];
    set<int> s1,se;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
        s1.insert(a[i]);
    }
    for (int i = 0 ; i < m ; i++) {
        cin >> b[i];
    }
    for (auto it = s1.begin(); it!= s1.end(); it++){
        for (int i = 0 ; i < m; i++){
            if (s1.find(b[i]) != s1.end()) se.insert(b[i]);
        
        }
    }
    for (int i : a) {
        if (se.find(i) != se.end()){
            cout << i << " ";
        }
    }
    return 0;
}
