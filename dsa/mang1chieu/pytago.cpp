#include <bits/stdc++.h>

using namespace std;

using ll = long long;
int main(){
    int n; cin >> n;
    int a[n];
    for( int&x : a) cin >> x;
    sort(a,a+n);
    for(auto &x:a) x=x*x;
    for(int i= n-1 ; i >=1 ;i--){
        int l = 0, r = i-1;
        while(l <r){
        if(a[l] + a[r] == a[i]){
            cout << "YES";
            return 0;
        }
        else if (a[l] + a[r] <a[i]) l++;
        else{
            r--;
        }
        }
    }
    cout << "NO";
    return 0;
}