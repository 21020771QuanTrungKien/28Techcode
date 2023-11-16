#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(auto &x: s){
        x = tolower(x);
    }
    stringstream ss(s);
    string tmp;
    int cnt = 0;
    while(ss >> tmp){
        if (tmp == "28tech"){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}