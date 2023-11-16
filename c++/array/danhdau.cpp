#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

typedef long long ll; 
int cnt[1000001];
int main(){
    int n; cin >> n;
    int a[n];    
    for(int i = 0; i < n; i++){
        cin >> a[i];    
    }
    for(int i = 0; i < n; i++){
        cnt[a[i]] = 1;
    }
    int cnt1 = 0;
    for(int i = 0; i < 10; i++){
        // if (cnt[i] == 1){ 
        // cout << i << " " << cnt[i] << endl;}
    if(cnt[i] == 1){
         cnt1++;
        }
    }
    cout << cnt1;
    return 0;
}