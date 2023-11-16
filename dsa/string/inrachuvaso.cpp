#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    vector<char> a;
    vector<char> b; 
    for(auto x: s){
        if(isdigit(x)) a.push_back(x);
        else b.push_back(x);
    }
    for(auto x : a) cout << x;
    cout << endl;
    for(auto x : b) cout << x;
    cout << endl;
    return 0;
}