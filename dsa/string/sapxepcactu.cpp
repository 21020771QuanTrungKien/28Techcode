#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

bool cmp(string s1, string s2){
    int l1 = s1.size(), l2 = s2.size();
    if(l1 != l2){
        return l1 < l2;
    }
    else {
        return s1 < s2;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    multiset<string> se;
    vector<string> v;
    while(cin >> s){
        se.insert(s);
        v.push_back(s);
    }
    for (auto x:se){
        cout << x << " ";
    }
    sort(v.begin(),v.end(),cmp);
    cout << endl;
    for (auto x: v){
        cout << x << " ";
    }
    return 0;
}