#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >>n;
    set<int> se;
    for(int i = 0 ; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int a; cin >> a;
    while(a--){
        int x; cin >> x;
        if(se.count(x) != 0) cout << "YES" << endl;
        else cout << "NO"<< endl;
    }
    
    return 0;
}