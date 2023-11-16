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
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    pair<int, int> v[n];
    v[0].first = abs(a[0] - a[1]);
    v[0].second = abs(a[n-1] - a[0]);
    v[n-1].first = abs(a[n-1] - a[n-2]);
    v[n-1].second = v[0].second;
    for(int i = 1; i < n; i++ ){
        v[i].first = min((abs(a[i] - a[i-1])),(abs(a[i+1] - a[i])));
        v[i].second = max(abs(a[i] - a[0]),abs(a[i] - a[n-1]));
    }
    for(int i = 0; i < n; i++ ){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}