#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string S;
    int cnt = 0;
    while (cin >> S) {
        int ok = 1;
        for (auto c = 0; c < S.size() ; c++) {
            if (!isupper(S[c])) { 
                ok = 0; 
                }
        }
        if ( ok == 1){
            cnt++;
        }
    }
    cout << cnt << endl; 

    return 0;
}
