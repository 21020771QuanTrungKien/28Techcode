#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

typedef long long ll; 

int main(){
    ll n, m, p; cin >> n >> m >> p;
    ll a[n], b[m];
    for(ll i = 0; i < n; i++){
        cin >> a[i];    
    }
    for(ll i = 0; i < m; i++){
        cin >> b[i];
    }
    // Chèn mảng mới vào vị trí k của mảng ban đầu
    for(ll i = n-1; i >= p; i--) {
        a[i+m] = a[i];
    }
    for(int i = 0; i < m; i++) {
        a[p+i] = b[i];
    }

    for(int i = 0; i < m+n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}