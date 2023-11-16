#include <bits/stdc++.h>
#include <algorithm>

#define For(i, a, b) for(int i=a;i<b;i++)
#define ForD(i, a, b) for(int i=b-1;i>=a;i--)
#define aij a[i][j]
#define pii pair<int,int>

using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    int minn = INT_MAX;
    int maxx = INT_MIN;
    char mi, ma;
    for (auto x: mp) {
        if (x.second > maxx) {
            maxx = x.second;
            ma = x.first;
        }
        if (x.second < minn) {
            minn = x.second;
            mi = x.first;
        }
    }
    for (auto x: mp) {
        if (x.second == maxx && ma > x.first)
            ma = x.first;
        if (x.second == minn && mi < x.first)
            mi = x.first;
    }
    cout << ma << " " << maxx << endl;
    cout << mi << " " << minn << endl;
    cout << mp.size() << endl;
    return 0;
}