#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool nt(int n){
	if(n < 2){
		return false;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int mod = 1000000007;

ll legendre(ll n, ll p){
	ll ans = 0;
	for(ll i = p; i <= n; i *= p){
		ans += n / i;
	}
	return ans;
}

int main(){
	int n; cin >> n;
	ll res = 1;
	for(int i = 1; i <= n; i++){
		if(nt(i)){
			ll kq = legendre(n, i);
			res = res * (kq + 1);
			res %= mod;
		}
	}
	cout << res << endl;
	return 0;
}