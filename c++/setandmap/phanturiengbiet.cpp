#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

#define For(i,a,n) for(int i=0 ; i<n ; i++)
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n ; cin >> n ;
    set<int> se;
    For(i , 0, n){
        int x; cin >> x;
        se.insert(x);
    }
    cout << se.size();
    return 0;
}