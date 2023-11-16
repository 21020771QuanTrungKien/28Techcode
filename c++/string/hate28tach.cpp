#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    int ok = 0;
    for (auto x: s) {
        if (x != '2' && x != '8' && x != 't' && x != 'e' && x != 'c' && x != 'h') {
            cout << x;
            ok = 1;
        }
    }
    if (ok == 0) cout << "EMPTY";
}
