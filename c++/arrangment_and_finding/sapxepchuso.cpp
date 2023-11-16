#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    int a[n];
    set<int> se;
    for(auto &x:a){
        cin >> x;
        while (x){
            se.insert(x % 10);
            x/=10; 
        }
    }
    for(auto x : se){
        cout << x << " ";
    }
}
