#include <iostream>

using namespace std;

using ll = long long;
int main() {
    ll n; cin >> n;
    ll a[1000];
    for(ll i = 0; i <= n; i++){
        cin >> a[i];    
    }
    for(ll i = 0; i <= n; i++){
        cout << a[i] << " ";    
    }
    return 0;
}