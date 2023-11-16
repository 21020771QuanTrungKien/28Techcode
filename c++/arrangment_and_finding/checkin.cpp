    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    #include <map>
    using namespace std;

    typedef pair<int, int> pi;

    int main() {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int n; cin >> n;
        pi a[n];
        for(auto &x: a){
            cin >> x.first >> x.second;
        }   
        sort(a,a+n);
        long long res= a[0].first + a[0].second;
        for(int i = 1; i< n; i++){
            if(a[i].first > res) res = a[i].first;
            res += a[i].second;
        }
        cout << res;
    }
