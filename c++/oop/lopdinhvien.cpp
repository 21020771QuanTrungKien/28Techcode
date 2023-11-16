#include <bits/stdc++.h>

using namespace std;

class SV{
private: 
    string name;
    string born;
    double toan, ly, hoa;

public:
    void nhap(){
        getline(cin,name);
        getline(cin,born);
        cin >> toan >> ly >> hoa;
    }

    double tong(){
        return toan + ly + hoa;
    }

    void in(){
        cout << name << " " << born << " " << fixed << setprecision(1) << tong() << endl; 
    }
};
int main(){
    SV x; 
    x.nhap();
    x.in();
    return 0;
}