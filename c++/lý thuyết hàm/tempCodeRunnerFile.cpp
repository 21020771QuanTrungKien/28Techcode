#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(long long n){
    if ((long long)sqrt(n)- sqrt(n) == 0) return true;
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a, b;
    cin >> a >> b;
    for(long long i = a; i <= b; i++){
        if(check(i)) cout << i << " ";
    }
    return 0;
}