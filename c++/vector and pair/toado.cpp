//
// Created by KIM on 27/03/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<double, double> p[n];
    vector<double> v(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
        v[i] = sqrt((p[i].first * p[i].first) + (p[i].second) * p[i].second);
    }
    for (auto x: v) {
        cout << fixed << setprecision(2) << x << " ";
    }
    return 0;
}