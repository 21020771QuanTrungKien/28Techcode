#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll lcm(ll a, ll b){
	return a / __gcd(a, b) * b;
}

int main(){
	// n = 16 =1 10^15 => 10^16
	int x, y, z, n; cin >> x >> y >> z >> n;
	ll bc = lcm(x, lcm(y, z));
	ll a = pow(10, n - 1), b = pow(10, n);
	//so nho nhat ma >= a chia het cho b : (a + b - 1) / b * b
	ll res = (a + bc - 1) / bc * bc;
	if(res < b){
		cout << res << endl;
	}
	else{
		cout << -1 << endl;
	}
	return 0;
}\