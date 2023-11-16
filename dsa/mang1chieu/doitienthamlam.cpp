#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    int a[]={1000,500,200,100,50,20,10,5,2,1};
    int idx = 0;
    long long cnt = 0;
    while(n){
        cnt+= n/ a[idx];
        n = n % a[idx];
        idx++;
    }
    cout << cnt; 
    return 0;
}