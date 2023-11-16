#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    string s; 
    getline(cin,s);
    sort(s.begin(),s.end());
    cout << s;
    cout << endl;
    sort(s.begin(),s.end(),greater<char>());
    cout << s;
}
