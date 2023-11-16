#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; 
    int diem, tin;
    map<string,pair<double, int>> mp;
    while(cin >> s >> tin >> diem ){
        mp[s].first += tin * diem;
        mp[s].second += tin;
    }
    for (auto i = mp.rbegin(); i != mp.rend() ; i++) {
        cout << i->first << " : " << fixed << setprecision(2)
        << i->second.first/ i->second.second << endl;
    }
    return 0;
}