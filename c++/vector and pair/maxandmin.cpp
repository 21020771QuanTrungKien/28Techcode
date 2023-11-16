#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> V(n);
    //vector<int>::iterator it;
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    cout << *min_element(V.begin(), V.end())<<endl;
    cout << *max_element(V.begin(), V.end())<<endl;
    cout << accumulate(V.begin(), V.end(), 0);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
