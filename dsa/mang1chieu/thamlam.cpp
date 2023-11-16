#include <bits/stdc++.h>

using namespace std;

int check(int n, int a[]){
    int d25 =0 , d50 = 50, d100 = 0;
    for (int i = 0 ; i< n; i++){
        if(a[i] == 25){
            d25++;
        }
        else if(a[i] == 50){
            if(25 >=1) d25--;
            else return 0;
            d50++;
        }
        else{
            if(d50 >=1 && 25>=1){
                d50--;
                d25--;
            }
            else if(25>=3) d25-=3;
            else return 0;
        }
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    if(check(n,a) == 0) cout << "YES";
    else cout << "NO";
}