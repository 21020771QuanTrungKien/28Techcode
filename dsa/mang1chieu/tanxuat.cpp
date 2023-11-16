#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n];
    map<int , int> mp;
    for(int &x: a) cin >> x;
    for(int i = 0 ; i < n ; i++){
        mp[i]++;
    }
    for(int i = 0 ; i < n ;i++){
        if(a[i].found())
    }
    return 0;
}