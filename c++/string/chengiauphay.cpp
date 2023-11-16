#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    int cnt = 1 ;
    int vt =s.size() - 3 ;
    while(vt > 0){
        s.insert(vt, ",");
        vt-= 3;
    }
    for(auto x : s){
        cout << x;
    }
    return 0;
}
