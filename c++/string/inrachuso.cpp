#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    string s1, s2;
    for (auto x:s){
        if(x > '0' && x <= '9'){
            s1+= x;
        }
        else{
            s2+= x;
        }
    }
    for ( auto x: s1){
        cout << x;
    }
    cout << endl;
    for (auto x : s2){
        cout << x;
    }
    return 0;
}
