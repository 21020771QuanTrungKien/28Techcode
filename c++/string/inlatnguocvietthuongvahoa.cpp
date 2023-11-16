#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    getline(cin,s);
    for(int i = s.size(); i > 0; i--){
        cout << s[i];
    }
    cout<<endl;
    for(auto x : s){
        cout << (char)tolower(x);
    }
    cout<<endl;
    for(auto x : s){
        cout << (char)toupper(x);
    }
    return 0;
}
