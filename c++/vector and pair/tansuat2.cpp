#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    char a[n];
    vector<pair<char,int>> v;
    for(int i = 0 ; i < n ; i++){
       cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++){
        int ok = 0;
        for(int j = 0 ; j < v.size(); j++){
            if (a[i] == v[j].first){
                ok = 1;
                v[j].second++;
                break;
            }
        }
        if(ok == 0) {
            v.push_back(make_pair(a[i],1));
        }
    }
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second<< endl;
    }
    return 0;
}
