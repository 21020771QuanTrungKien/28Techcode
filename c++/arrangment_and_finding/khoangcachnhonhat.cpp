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
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    stable_sort(a,a+n);
    int minn = 9999999999;
    for(int i = 1 ; i < n; i++){
        minn= min(a[i] - a[i-1], minn);
    }
    cout << minn;
    return 0;
}