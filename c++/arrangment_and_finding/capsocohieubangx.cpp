#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int tknp1(int a[], int l, int r, int x) {
    int res = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) {
            res = mid;
            r = mid - 1;
        } else if (a[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}

int tknp2(int a[], int l, int r, int x) {
    int res = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) {
            res = mid;
            l = mid + 1;
        } else if (a[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k; cin >> n >> k ;
    int a[n];
    for (auto &x : a){
        cin >> x;
    }
    sort(a,a+n);
    for(int i = 0 ; i < n; i++){
        int res1=tknp1(a,i+1,n-1,a[i] + k);
        int res2=tknp2(a,i+1,n-1,a[i] + k);
        if(res1 != -1){
            cout << 1;
            exit(0);
        }
    }
    cout << -1;
    return 0;
}