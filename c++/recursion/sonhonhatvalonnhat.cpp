#include <bits/stdc++.h>

using namespace std;

long long lon(long long n){
    if(n < 10) return n%10;
    return max(lon(n/10),n%10);
}


int main(){
    int n;
    cin >> n ;
    cout << dem(n);
    return 0;
}