#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,l; cin >> n >> l;
    int a[n];
    for(auto &x : a){
        cin >> x;
    }
    sort(a,a+n);
    double bk = max(a[0], l-a[n-1]);    
    for(int i = 1; i < n; i++){
        bk = max(bk, (double)(a[i] - a[i-1])/2);
    }
    cout << fixed << setprecision(10) << bk;
    return 0;
}