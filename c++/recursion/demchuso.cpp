#include <bits/stdc++.h>

using namespace std;

long long dem(int n){
    if (n < 10) return 1;
    return 1 + dem(n/10);
}

int main(){
    int n;
    cin >> n ;
    cout << dem(n);
    return 0;
}