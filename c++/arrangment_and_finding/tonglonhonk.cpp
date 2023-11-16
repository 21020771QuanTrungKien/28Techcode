#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int check2(int a[], int l ,int r, int x){
    int res =-1;
    while(l<=r){
        int mid = (l+r)/2;
        if (a[mid] > x){
            res = mid;
            r = mid - 1;
        }  
        else{
            l= mid + 1;
        }
    }
    return res;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k; cin >> n >> k; 
    int a[n];
    for (int i =0 ; i< n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long  cnt = 0;
    for(int i = 0; i < n; i++){
        int res2 = check2(a,i+1 ,n - 1,k-a[i]);
        if(res2 != -1){
            cnt+=(n-1) - res2;
        }
    }
    cout << cnt;
    return 0;
}
