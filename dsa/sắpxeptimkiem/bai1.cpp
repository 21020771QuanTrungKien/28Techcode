#include <bits/stdc++.h>

using namespace std;

bool doixung(int n){
    while (n)
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x: a){
        cin >> x;
        a[i] = x;
    }
    int maxpos = 0, minpos = 0; 
    for (int i = 0 ; i< n; i++){
        if(a[i] > a[maxpos]){
            maxpos = i;
        }
        else {
            minpos = i;
        }
    }

    return 0;
}