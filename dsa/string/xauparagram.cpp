#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s; cin >> s;
    int cnt[256] = {0};
    for(char x: s){
        cnt[tolower(x)] = 1;
    }
    for(int i = 'a' ; i <= 'z'; i++){
        if(cnt[i] == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}