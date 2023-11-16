#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    getline(cin ,s);
    int sum = 0 ; 
    for(auto x: s){
        if (x > '0' && x <= '9'){
            sum+= x - 48;
        }
    }
    cout << sum; 
    return 0;
}
