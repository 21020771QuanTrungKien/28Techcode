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

// int binarySearch1(int a[], int n, int x){
//     int left = 1; int right = n-1; int res = -1;
//     while(left <= right){
//         int mid = (left + right) / 2;
//         if(a[mid] == x){
//             res = mid;
//             right = mid - 1;
//         }
//         else if(a[mid] < x){
//             left = mid + 1;
//         }
//         else{
//             right = mid - 1;
//         }    
//     }
//     return res;
// }

// int binarySearch2(int a[], int n, int x){
//     int left = 1; int right = n-1; int res = -1;
//     while(left <= right){
//         int mid = (left + right) / 2;
//         if(a[mid] == x){
//             res = mid;
//             right = mid + 1;
//         }
//         else if(a[mid] < x){
//             left = mid + 1;
//         }
//         else{
//             right = mid - 1;
//         }    
//     }
//     return res;
// }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int res = 0;
    sort(a,a+n);
    for(int i = 0 ; i<n-1 ; i++){
            int truoc = binarySearch1(a,k-a[i]);
            int sau = binarySearch2(a,k-a[i]);
            if(truoc!=-1){
                res += sau - truoc +1;
            }
        }
    cout << res;
    return 0;
}
