#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    vector<char> v;
    for(int i = 0 ; i < s.size(); i++){
        if (s[i] != '2' && s[i] != '8' && s[i] != 't' && s[i] != 'e'
        && s[i] != 'c' && s[i] != 'h') 
            v.push_back(s[i]);
    }
    if (v.empty) cout << "EMPTY";
    else for (auto x : v){
        cout << x;
    }
    return 0;
}