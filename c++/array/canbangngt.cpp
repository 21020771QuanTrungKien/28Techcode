#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool snt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return n>1;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        
    for(int i=0;i<n;i++){
        int tong1=0, tong2=0;
        for(int j=0;j<i;j++){
            tong1+=a[j];
        }
        for(int k=i+1;k<n;k++){
            tong2+=a[k];
        }
        if(snt(tong1) && snt(tong2)) cout<<i<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
