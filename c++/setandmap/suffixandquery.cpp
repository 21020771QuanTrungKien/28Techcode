#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n],
    dem[n] ={0};
    set<int> se;
    for (int &i: a){
        cin >> i; 
    }
    for (int i = n-1 ; i >= 0; i--){
        se.insert(a[i]);
        dem[i] = se.size();       
    }
    int q; cin >> q;
    while (q--){
        int x; cin >> x;
        cout << dem[x] << endl;
    }
    return 0;
}