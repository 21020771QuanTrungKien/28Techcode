#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(x == 1){
            int a, b; cin >> a >> b; 
            v.insert(v.begin()+a, b);
        }
        else if( x==2 && (!v.empty())){
            int a; cin >> a;
            v.erase(v.begin() + a);
        }
    }
    if (v.empty()) cout << "EMPTY";
    else {
        for(auto x: v){
            cout << x << " ";
        }
    }
    return 0;
}
