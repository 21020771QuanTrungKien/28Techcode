#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void xuoi(ll n, const int &n_bg){
    if(n==0) 
        return;
    xuoi(n/10, n_bg);
    if (n==n_bg) cout<<n%10; else
    cout<<n%10<<"-";
}
void nguoc(ll n){
    if(n == 0) return ;
    if (n/10==0) cout<<n%10;
    else cout << n%10 << "-";
    nguoc((n/10));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // ll n; cin >> n;
    // ll res = 0;
    // while(n){
    //     res = n % 10;g
    //     n /=
    //     cout << res << " ";
    // }

    ll n = 123; 
    xuoi(n, n); cout<<endl;
    nguoc(n);
    return 0;
}
