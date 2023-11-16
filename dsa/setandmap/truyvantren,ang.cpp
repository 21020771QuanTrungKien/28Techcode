#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    int a[n];
    set<int> se;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++){
        int temp;
        temp = a[i];
        if (se.find(temp) == se.end()){
            cout << temp << " ";
            se.insert(temp);
        }   
    }
    return 0;
}