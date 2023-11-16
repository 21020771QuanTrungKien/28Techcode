#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long n , m, k ; cin >> n >> m >> k;
    int a[n], b[m];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m ; i++){
        cin >> b[i];
    }
    long long cnt = 0;
    sort(a,a+n,greater<int>());
    sort(b,b+m,greater<int>());
    int i = 0 ,j = 0;
    while((i < n) && ( j<m)){
        if(abs(a[i] - b[j]) <= k){
            cnt++;
            i++;
            j++;
        }
        else if(a[i]- b[i] > k){
            i++;
        }
        else j++;
    }
    cout << cnt;
    return 0;
}