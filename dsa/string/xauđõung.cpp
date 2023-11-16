#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool dxung(string s){
    int l = 0, r = s.size()-1;
    while(l<r){
        if(s[l] == s[r]){
            l++;
            r--;
        }
        else return false;
    }
    return true;
}

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    if(dxung(s)) cout << "YES";
    else cout << "NO";
    return 0;
}