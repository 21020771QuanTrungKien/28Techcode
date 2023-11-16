#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    map<char,int> mp;
    for(auto x : s){
        mp[x]++;
    }
    int maxx = 0; 
    char max_key = mp.begin()->first;
    char min_key = mp.begin()->first;
    int minn = 10e7;
    for (auto x : mp){
        if (x.second >= maxx){
            maxx = x.second;
        }
        if (x.second < minn){
            minn = x.second;
        }
    }
    for (auto it = mp.rbegin() ; it != mp.rend(); it++){
        if(it->second == maxx){
            max_key = it->first;
            break;
        }
    }
    for (auto it = mp.rbegin() ; it != mp.rend(); it++){
        if(it->second == minn){
            min_key = it->first;
            break;
        }
    }
    cout << max_key << " " << maxx << endl;
    cout << min_key << " " << minn << endl;
    return 0;
}