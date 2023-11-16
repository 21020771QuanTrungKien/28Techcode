#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class SV{
    private:
        string ma;
        string name;
        string born;
        string lop;
        double gpa;
    public:
        void nhap(){
            this->ma = "SV001";
            getline(cin,name);
            getline(cin,lop);
            getline(cin,born);
            cin >> gpa;
        }

        void chuanhoa(){
            if(this->born[1] == '/') this->born = "0" + this->born;
            if(this->born[4] == '/') this->born.insert(3,"0");
        }
        void in(){
            cout << this->ma << " ";
            cout << this->name << " " << this->lop << " " << this->born << " " << fixed << setprecision(1) << this->gpa;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    SV a;
    a.nhap();
    a.chuanhoa();
    a.in();
    return 0;
}
