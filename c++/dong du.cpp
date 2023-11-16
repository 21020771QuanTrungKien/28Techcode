#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    long long n;
    cin >> n;

    long long total = 0;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        total = (total * x) % MOD;
    }

    cout << total << endl;

    return 0;
}