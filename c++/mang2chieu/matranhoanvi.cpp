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
    cin >> n;
    int a[n][n];
    For(i, 0, n) {
        For(j, 0, n) {
            cin >> a[i][j];
        }
    }
    For(i, 0, n) {
        For(j, 0, n) {
                cout << a[j][i] << " ";
        }
        cout << endl;
    }
    cout <<"Pattern"<< endl;
    for(int i = n-1 ; i >= 0; i--) {
        for(int j = n-1 ; j >= 0; j--) {
                cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"Pattern"<< endl;

    for(int i = n-1 ; i >= 0; i--) {
        for(int j = 0 ; j <n; j++) {
                cout << a[j][i] << " ";
        }
        cout << endl;
    }
    cout << "Pattern 4:";
    for(int i = 0 ; i < n; i++) {
        for(int j = n-1 ; j >= 0; j--) {
                cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
