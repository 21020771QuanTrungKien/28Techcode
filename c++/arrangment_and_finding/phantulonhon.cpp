#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n ;
    int a[n],b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    for(int i = 0 ; i < n; i++){
        auto it = upper_bound(b,b+n,a[i]);
        if ( it != b+n){
            cout << *it << " ";
        }
        else cout << "_"<< " ";
    }
    return 0;
}