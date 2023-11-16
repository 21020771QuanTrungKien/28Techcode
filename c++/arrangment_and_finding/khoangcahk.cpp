#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k; cin >> n >> k;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int cnt = 1;
    for(int i = 0; i < n; i++){
        if(a[i+1] - a[i] > k){
            cnt++;
        }
    }
    cout << cnt; 
    return 0;
}