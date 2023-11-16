#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i <=sqrt(n); i++){
        if(n % i == 0 ) return false;
    }
    return (n > 1);
}

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    vector<int> v;
    map<int,int> mp;
    while(cin >> n){
        if(prime(n)){
            v.push_back(n);
            mp[n]++;
        }
    }
    for(auto x:v){
        auto it = mp.find(x);
        if(it != mp.end()){
            cout << it->first << " " << it->second<<endl;
            mp.erase(x);
        }
    }
    return 0;
}
