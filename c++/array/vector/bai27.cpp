#include <bits/stdc++.h>

using namespace std;

int demchan(int n){
    int cnt =0;
    while (n){
        if (n%10 == 0) ++cnt; 
        n/=10;
    }
    return cnt;
}

int main(){
    int n; cin >> n;
    cout << demchan(n);
    // int a[n];
    // for (int i= 0; i< n ;i++){
    //     cin >>a[i];
    // }
    // sort(a,a+n);
    // int dem;
    // for (int i= 0; i< n ;i++){
    //     dem = 1;
    //     if(a[i] = a[i+1]){
    //         dem++;
    //     }
    //     cout << a[i] << " " << dem;
    // }
    // return 0;
}
