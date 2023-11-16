#include <bits/stdc++.h>

using namespace std;

bool tn(int n){
    int lat = 0, tmp = n;
    while (n){
        if(n%10 == 6) return true;
        n /= 10;
    }
    return false;
}

bool tong8(int n){
    while (n != 0)
}
int main()