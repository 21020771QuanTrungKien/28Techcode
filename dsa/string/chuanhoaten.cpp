#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s, t;
    vector<string> v;
    getline(cin,s);
    getline(cin,t);
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){        
        for(int i = 0 ;i < tmp.size(); i++){
            tmp[i] = tolower(tmp[i]);
        }
        tmp[0] = toupper(tmp[0]);
        v.push_back(tmp);
    }
    if(t[1] == '/') t = "0" + t;
    if(t[4] == '/') t.insert(3,"0");
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;
    cout << t;
    return 0;
}