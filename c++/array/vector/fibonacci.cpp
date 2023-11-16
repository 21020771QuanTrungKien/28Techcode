#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll Fibo[1000001];


int main(){
    Fibo[0] = 0;
    Fibo[1] = 1;
    for(int i = 2; i <= 1000000; i++){
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
        Fibo[i] %= 1000000007;
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << Fibo[n] << endl;
    }
}