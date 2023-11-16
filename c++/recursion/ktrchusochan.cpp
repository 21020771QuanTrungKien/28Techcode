#include <bits/stdc++.h>

using namespace std;

bool chan(long long  n){
    if (n ==0 ) return true;
    if (n %2 != 0){
        return false;
    }
    return chan(n/10);
}

int main(){
    int n;
    cin >> n ;
    cout << chan(n);
    return 0;
}