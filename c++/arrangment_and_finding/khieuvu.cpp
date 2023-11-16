#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n , m ; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m ; i++){
        cin >> b[i];
    }
    int cnt = 0;
    sort(a,a+n,greater<int>());
    sort(b,b+m,greater<int>());
    int i = 0 ,j = 0;
    while((i < n) && ( j<m)){
        if(a[i] <= b[j]){
            j++;
        }
        else{
            cnt++;
            i++;
            j++;
        }
    }
    cout << cnt;
    return 0;
}

4 5
6 4 2 1
9 7 5 5 1