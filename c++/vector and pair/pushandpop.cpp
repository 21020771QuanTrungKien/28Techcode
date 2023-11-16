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
    while (n--){
        int x; cin >> x;
        if ( x == 1) {
            int a; cin >> a;
            v.push_back(a);
        }
        else if(x == 2){
            if(!v.empty()){
                v.pop_back();
            }
        }
    }
    if (!v.empty()){
    for(auto x: v){ 
        cout << x << " ";}
    }
    else cout << "EMPTY";
    
    return 0;
}
