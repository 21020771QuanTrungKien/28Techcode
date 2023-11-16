#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    int a[n+1];
    for(auto &x : a) cin >> x;
    sort(a,a+n);
    long long sum = a[0]; 
    if(a[0] != 1){
        cout << 1;
        exit(0);
    }
    for(int i = 1 ; i < n; i++){
        if (a[i] - sum <= 1) {
            sum += a[i];
        } 
        else {
            cout << sum + 1;
            exit(0);
        }
    }
    cout << sum + 1;
    return 0;
}