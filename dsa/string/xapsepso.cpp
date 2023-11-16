#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt = 0;
    for (auto x: s) {
        if (x == '0'){
            cnt++;
        }
        else break;
    }
    if (cnt == s.size()){
        cout << 0;
    }
    else{
        for(auto x: s){
            if(x > '0' && x <= '9'){
                cout << x;
            }
        }
    }
    return 0;
}
