#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch1(int a[], int n, int x){
    int left = 0; int right = n-1; int res = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == x){
            res = mid;
            right = mid - 1;
        }
        else if(a[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }    
    }
    return res;
}

int binarySearch2(int a[], int n, int x){
    int left = 0; int right = n-1; int res = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == x){
            res = mid;
            right = mid + 1;
        }
        else if(a[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }    
    }
    return res;
}

int binarySearch3(int a[], int n, int x){
    int left = 0; int right = n-1; int res = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] >= x){ //1 2 3 4 5
            res = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }    
    }
    return res;
}

int binarySearch4(int a[], int n, int x){
    int left = 0; int right = n-1; int res = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] > x){ //1 2 3 4 5
            res = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }    
    }
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    cout << binarySearch1(a,n,x) << endl;
    cout << binarySearch2(a,n,x) << endl;
    cout << binarySearch3(a,n,x) << endl;
    cout << binarySearch4(a,n,x) << endl;
    if (binarySearch1(a,n,x) == -1) cout << 0;
    else {
        cout << binarySearch2(a,n,x) - binarySearch1(a,n,x);
    }
    return 0;
}