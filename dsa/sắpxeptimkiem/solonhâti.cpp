#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int b[n];
    vector<pair<int,int>> v;
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    for(int i = 0; i < n ; i++){
        if(b[i+1] > b[i]){
            v.push_back(make_pair(b[i],b[i+1]));
        }
    }
    for(auto x: b) cout << x << " ";
    cout << endl;
    for(auto x : v) cout << x.first << " " << x.second<< endl;
    cout << endl;
    return 0;
}