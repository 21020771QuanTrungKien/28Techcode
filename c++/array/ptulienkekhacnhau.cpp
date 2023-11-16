#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void del(int a[], int k, int n){
    for(int i=k;i<n-1;i++){
        a[i]=a[i+1];
    }
}

int main() {
    int n;
    cin>>n;
    int a[n+3];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // for(int i=0;i<n-1;i++){
    //     if(a[i]==a[i+1]){
    //         del(a,i+1,n);
    //         n--;
    //         i--;
    //     }
    // }
    for(int i=0;i<n;i++){
        if(a[i] != a[i+1]){
        cout<<a[i]<<" ";
        }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
