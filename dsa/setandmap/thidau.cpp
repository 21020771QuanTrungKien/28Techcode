#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    map<string,vector<string>> mp;
    for (int i = 0 ; i < n ; i++){
        string s; getline(cin,s);
        string a,b;
        int pos = 0;
        while (s[pos] != '-'){
            pos++;
        }
        a = s.substr(0,pos -1);
        b = s.substr(pos + 2, s.size());
        mp[a].push_back(b);
        mp[b].push_back(a);
    }

    for (auto it:mp){
        cout << it.first << " : ";
        sort (it.second.begin(), it.second.end());
        for (int i = 0 ; i < it.second.size(); i++){
            if (i == it.second.size() - 1) {
                cout << it.second[i] << endl;
                break;
            }
            cout << it.second[i] << ", ";
        }
    }
    return 0;
}