#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int cnt[10000001];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n];
    int l= INT_MAX, r = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        cnt[a[i]] = 1 ;
        l = min(l,a[i]);
        r = max(r,a[i]);
    }
    int dem = 0 ;
    for(int i = l; i <= r; i++){
        if(cnt[i] == 0){
            ++dem;
        }
    }
    cout << dem;
    return 0;
}
