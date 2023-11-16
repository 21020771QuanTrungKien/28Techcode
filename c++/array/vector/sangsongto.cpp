#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int cnt = 0;
    vector <bool> v(n+1,true);
    for(int i = 0; i < sqrt(n); i++){
    
        if((v[i])==true){
            for(int p=i*i; p <=n; p+=i){
                v[p] = false;
            }
        }
    }

    for(int i = 0; i<=n; i++){
        if(v[i] == true){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
