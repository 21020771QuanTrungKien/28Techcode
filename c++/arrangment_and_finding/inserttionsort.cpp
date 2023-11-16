#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n; i++){
        int pos = i - 1, x = a[i];
        while(pos >= 0 && a[pos] > x){
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
        cout << "Buoc " << i << ": ";
        for (int k = 0; k < n; ++k) {
            cout << a[k] << " " ;           
        }
        cout <<endl;
    }
    return 0;
}
