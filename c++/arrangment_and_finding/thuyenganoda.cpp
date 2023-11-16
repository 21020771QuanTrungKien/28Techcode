#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long n, x ; cin >> n >> x;
    int a[n];
    for(int &x : a){
        cin >> x;
    } 
    sort(a,a+n);
    long long cnt = 1;
    long long l = 0, r = n-1;
    while (l<r){
        if(a[l] + a[r] <=x ){
            cnt++;
            l++;
            r--;
        }
        else {
            cnt++;
            r--;
        }
    }
    cout << cnt;
    return 0;
}