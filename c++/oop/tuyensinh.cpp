#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class SV{
    private:
        string id;
        string name;
        double toan, ly, hoa;
    public:
    void nhap(){
        getline(cin,id);
        getline(cin,name);
        cin >> toan >> ly >> hoa;
    }
    int tongdiem(){
        double s = this->toan + this->ly + this->hoa;
        if((int)s - s == 0) return (int)s;
        else return s;
    }
    string kv(){
        return id.substr(2,1);
    }
    double bonus(){
        if(id == "KV1") return 0.5;
        else if(id = "KV2") return 1.0;
        else return 2.5;
    }

    double tong(){
        return this->tongdiem() + this->bonus();
    }
    string check(){
        if (tong < 24) return "TRUOT";
        else return "DO";
    }

    void in(){
        cout << this->id << " " << this->name << " " << this->kv() << 
        " " << this->tong() << "" << this->check();
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    SV a;
    a.nhap();
    a.in();
    return 0;
}