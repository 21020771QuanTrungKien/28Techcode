#include <bits/stdc++.h>

using namespace std;

long long chan(long long n){
    if(n %2 == 0){
        if (n == 0){
            return n % 10;
        }
        return n%10 +chan(n/10);
    }
    return chan(n/10);
}


int main(){
    int n;
    cin >> n ;
    cout << dem(n);
    return 0;
}