#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i <=sqrt(n); i++){
        if(n % i == 0 ) return false;
    }
    return (n > 1);
}

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n];
    for(auto &x:a){
        cin >> x;
    }
    for(auto x: a){
        if(prime(x)) cout << x << " ";
    }
    return 0;
}
