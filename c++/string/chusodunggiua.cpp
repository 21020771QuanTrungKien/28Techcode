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
    if(s.size() %2 !=0){
        cout << s[s.size()/2];
    }
    else cout << "NOT FOUND";
    return 0;
}
