#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void xuoi(ll n){
    if(n<10)
        cout<<n<<" ";
    else {
        xuoi(n/10);
        cout << n%10 << " ";        
    }
}
void nguoc(ll n){
    if (n<10) 
        cout<<n;
    else { 
        cout << n%10 << " ";
    	nguoc((n/10));
    }
}

int main() {
    ll n;
    cin>>n;
    xuoi(n);
    cout<<endl;
    nguoc(n);
    return 0;
}
