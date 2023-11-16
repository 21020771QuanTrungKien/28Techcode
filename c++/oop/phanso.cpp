#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


ll gcd(ll a, ll b){
    while(b){
        ll t = a % b; a = b; b = t;
    }
    return a;
}

class Ps{
    private:
        int tu, mau;
    public:
        void nhap(){
        cin >> this->tu >> this->mau;
    }
    public:
    void toigian(){
        ll k= gcd(this->tu, this-> mau);
        this->tu /= k;
        this->mau /= k;
        if(this->mau <0){
            this->mau*=-1;
            this->tu*=-1;
        }
    } 

    Ps operator + (Ps b){
        ll m = this->mau * b.mau ;
        ll tu = this->tu * b.mau + this->mau * b.tu;
        Ps res{tu,m};
        return res.toigian(); 
    }
    
    Ps operator*(Ps b){
        ll m = this->mau * b.mau ;
        ll tu = this->tu * b.tu;
        Ps res{tu,m};
        return res.toigian(); 
    }

    void in(){
        cout << this->tu << "/" << this->mau << endl;
    }
};


int main(){
    Ps a, b, c;
    a.nhap();
    c.nhap();
    b.nhap();
    ll res = sqr(a+b);
    ll res2 = (a*b*c);
    res.in();
    cout << " ";
    res2.in();
    return 0;
}