#include <bits/stdc++.h>
#include <algorithm>

#define For(i, a, b) for(int i=a;i<b;i++)
#define pii pair<int, int>

using namespace std;
using ll = long long;

int prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    For(i, 0, n) {
        For(j, 0, m) {
            cin >> a[i][j];
        }
    }
    For(i, 0, n) {
        For(j, 0, m) {
            if (prime(a[i][j])) {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }

}
