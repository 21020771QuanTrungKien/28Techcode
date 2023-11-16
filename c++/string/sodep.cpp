#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; 
    cin >> s;
    int cnt = 0 ;
    for(auto i = 1; i < s.size(); i++){
        if(abs(s[i] - s[i-1]) != 1){
            cnt = 1;
            break;
        }
    }
    if (cnt == 0) cout << "YES";
    else cout << "NO";
    return 0;
}
