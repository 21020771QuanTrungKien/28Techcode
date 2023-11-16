#include <bits/stdc++.h>
using namespace std;

using ll = long long;
//O(log2B)

int mod = 1000000007;

ll binpow(ll a, ll b){
	if(b == 0){
		return 1;
	}
	ll X = binpow(a, b / 2);
	if(b % 2 == 0){
		return (X % mod) * (X % mod) % mod;
	}
	else{
		return ((X % mod) * (X % mod) % mod) * (a % mod) % mod;
	}
}

int main(){
	ll a, b; cin >> a >> b;
	cout << binpow(a, b) << endl;
	return 0;
}