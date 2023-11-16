#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string t;
    vector<string> v;
    while(ss >> t){
        for(int i = 0; i < t.size(); i++){
            t[i] = tolower(t[i]);
        }
        t[0] = toupper(t[0]);
        v.push_back(t);
    }
    auto it = v.rbegin();
    string ten = *it;
    for(int i = 0; i < ten.size(); i++){
        ten[i] = toupper(ten[i]);
    }
    for(int i = 0 ; i < v.size() - 2; i++){
        cout << v[i] << " ";
    }
    cout << v[v.size() - 2] << ", " << ten << endl;
    cout << ten << ", " ;
    for(int i = 0 ; i  < v.size() - 1 ; i++){
        cout << v[i] << " ";
    }
    return 0;
}