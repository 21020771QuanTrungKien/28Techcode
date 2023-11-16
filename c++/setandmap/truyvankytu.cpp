#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    int dem[1000] = {0};
    char n[s.size()];
    for (int i = 0 ; i< s.size(); i++) {
        n[i] = s[i];
        dem[n[i]]++;
    }
    // for (int i =0 ; i < 1000; i++){
    //     if (dem[i] != 0) cout << (char)i << " " << dem[i]<< endl;
    // }
    int max = INT_MIN;
    char max_value ;
    int min = INT_MAX;
    char min_value;
    int cnt = 0;
    for (int i = 0; i< 1000; i++ ){
        if (dem[i] !=0){
        if (dem[i] > max){
            max = dem[i];
            max_value = i;
        } 
        if (dem[i] <= min){
            min = dem[i];
            min_value = i;
        }
        cnt++;
    }
    }
    cout << max_value << " " << max;
    cout << endl;
    cout << min_value << " " << min << endl;
    cout << cnt;
    return 0;
}