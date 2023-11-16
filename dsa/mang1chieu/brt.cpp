#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(auto &x:a) cin >> x;
    sort(a,a+n);
    int minn = INT_MAX;
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(a[i] - a[i-1] < minn){
            minn = a[i] - a[i-1];
            cnt = 1;
        }
        else if(a[i] - a[i-1] == minn) cnt++;
    }
    cout << minn << " " << cnt;
    return 0;
}