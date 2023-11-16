#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    set<char> se;
    for(int i = 0 ; i < n ; i ++){
        char x; cin >> x;
    }
    cout << se.size() << endl;
    for (auto it = se.begin(); it != se.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = se.rbegin(); it != se.rend(); it++){
        cout << *it << " ";
    }    
    return 0;
}