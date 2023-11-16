#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    map<char,int> mp;
    for (auto x : s){
        mp[x]++;
        if(mp[x] > 1){
            cout << x;
            exit(0);
        }
    }
    cout << "NONE";
    return 0;
}
