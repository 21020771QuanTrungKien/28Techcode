#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n];
    for(auto &x: a){
        cin >> x;
    }
    for(int i = 1; i < n ; i++){
        if(i % 2 != 1){
            swap(a[i],a[i-1]);
        }
        else swap(a[i],a[i-1]);
    }

    for(auto x: a){
        cout << x << " ";
    }
    return 0;
}