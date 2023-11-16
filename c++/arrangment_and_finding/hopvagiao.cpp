#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m; cin >> n >> m;
    int a[n], b[m];
    set<int> se ;
    for(int i = 0; i< n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    for(int i = 0 ; i < m; i++){
        cin >> b[i];
        se.insert(b[i]);
    }
    sort(a,a+n);
    sort(b,b+m);
    int i = 0, j = 0;
    while(i< n && j < m){
        if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    cout << endl;
    for (int x: se){
        cout << x << " ";
    }
    return 0;
}
