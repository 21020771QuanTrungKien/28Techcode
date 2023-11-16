#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int tong(int n){
    int s = 0;
    while(n){
        s+= n%10;
        n/=10;
    }
    return s;
}
bool cmp(int a, int b){
    int s = tong(a), s1 = tong(b);
    if (tong(a) != tong(b)) return tong(a) < tong(b);
    else return a < b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n];
    for(int i =0 ; i < n ; i++){
        cin >> a[i];
    }
    stable_sort(a, a+n, cmp);
    for (auto i: a){
        cout << i << " ";
    }
    return 0;
}
