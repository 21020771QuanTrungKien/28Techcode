#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    getline(cin,s);
    for (auto &c:s){
        if(c == '.' || c == ',' || c == '?' || c == '!')
            c = ' ';
    }
    stringstream ss(s);
    string tmp;
    while (ss >> tmp) {
        cout << tmp << " ";
    }
}