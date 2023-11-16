#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s; getline(cin, s);
    for(char x : s){
        x = toupper(x);
        cout << x;
    }
    cout << endl;
    for(char x : s){
        x = tolower(x);
        cout << x;
    }
    return 0;
}