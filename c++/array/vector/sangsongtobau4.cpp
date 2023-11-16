#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sang(int n){
    int cnt = 0;
    vector <bool> v(n+1,true);
    for(int i = 2; i < sqrt(n); i++){
        if((v[i])==true){
            for(int p=i*i; p <=n; p+=i){
                v[p] = false;
            }
        }
    }
    int dem[n]
    for (int n = 0; i < n; i++){
        dem[i] = dem[i-1] + prime[]
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    while(n--){
    int x; cin >> x;
    cout << sang(x);
    }
    return 0;
}