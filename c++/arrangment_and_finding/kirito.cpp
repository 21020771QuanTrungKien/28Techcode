#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int,int> pi;

bool cmp(pi a, pi b){
    if(a.first != b.first) return a.first < b.first;
    else return a.second < b.second;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, s; cin >> n >> s;
    pi a[n];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n,cmp);
    for (auto x:a){
        if (s > x.first) s+=x.second;
        else {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}