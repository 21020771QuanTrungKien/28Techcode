#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    while(b){
        ll t = a % b; a = b; b = t;
    }
    return a;
}

struct phanSo{
    ll tu;
    ll mau;
    void nhap(){
        cin >> this->tu >> this->mau;
    }

    void toigian(){
        ll k= gcd(this->tu, this-> mau);
        this->tu /= k;
        this->mau /= k;
        if(this->mau <0){
            this->mau*=-1;
            this->tu*=-1;
        }
    } 

    phanSo operator + (phanSo b){
        ll m = this->mau * b.mau ;
        ll tu = this->tu * b.mau + this->mau * b.tu;
        phanSo res{tu,m};
        res.toigian();
        return res; 
    }

    phanSo operator - (phanSo b){
        ll m = this->mau * b.mau ;
        ll tu = this->tu * b.mau - this->mau * b.tu ;
        phanSo res{tu,m};
        res.toigian();
        return res; 
    }
    
    void in(){
        cout << this->tu << "/" << this->mau << endl;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    phanSo a, b;
    a.nhap();
    b.nhap();
    a.toigian();
    b.toigian();
    a.in();
    b.in();
    phanSo s= a + b;
    s.in();
    phanSo h= a - b;
    h.in();
    return 0;
}
