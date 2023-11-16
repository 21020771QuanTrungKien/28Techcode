#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int mod = 1000000007;

void in1(ll n){
	if(n < 10){
		cout << n;
	}
	else{
		cout << n % 10 << ' ';
		in1(n / 10);
	}
}

//in2(12345)
void in2(ll n){
	if(n < 10){
		cout << n << ' ';
	}
	else{
		in2(n / 10);
		cout << n % 10 << ' ';
	}
}


int main(){
	ll n; cin >> n;
	in2(n); cout << endl;
	in1(n);
	return 0;
}