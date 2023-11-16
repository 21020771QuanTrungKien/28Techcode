#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool sodep(int n){
    int mu = 0;
    for(int i = 2; i<= sqrt(n); i++){
        mu = 0;
        while(n % i == 0){
            mu++;
            n/=i;
        }
    }
    if(mu > 1) return true;
    else return false;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b; 
    cin >> a >> b;
    for(int i = a; i<= b; i++){
        if(sodep(i)) cout << i << " ";
    }
    return 0;
}