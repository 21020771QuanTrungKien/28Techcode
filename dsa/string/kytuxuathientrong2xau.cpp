#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s1, s2; 
    cin >> s1 >> s2;
    int cnt1[256] = {0};
    int cnt2[256] = {0};
    for(char x : s1){
        cnt1[x] = 1;
    }
    for(char x : s2){
        cnt2[x] = 1;
    }
    for(int i = 0 ; i < 256; i++){
        if (cnt1[i]  && cnt2[i] ){
            cout << (char)i;
        }
    }
    cout << endl;
    for(int i = 0 ; i < 256; i++){
        if (cnt1[i] || cnt2[i] ){
            cout << char(i);
        }
    }
    cout << endl;
    return 0;
} 