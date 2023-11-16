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
    for(int i =0 ; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    int cnt = 0;
    for(int i = 0 ; i <n ;i++){
        if(a[0] == 0){
            break;
        }
        a[0] = min(a[0]-1,a[i]);
        cnt++; //
    }
    cout << cnt;
    return 0;
}