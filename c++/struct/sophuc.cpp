#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct soAo
{
    ll x;
    ll z;

    void nhap(){
        cin >> this->x >> this->z;
    }

    soAo operator + (soAo s2){
        ll thuc = this->x + s2.x;
        ll ao = this->z + s2.z;
        soAo res{thuc,ao};
        return res;
    }

    soAo operator - (soAo s2){
        ll thuc = this->x - s2.x;
        ll ao = this->z - s2.z;
        soAo res{thuc,ao};
        return res;
    }

    soAo operator * (soAo s2){
        ll thuc = this->x * s2.x - this->z * s2.z;
        ll ao = this->z * s2.z + this->z * s2.x;
        soAo res{thuc,ao};
        return res;
    }

    void in(){
        cout << this->x << " " << this->z << endl;
    }
};

int main(){
    soAo a,b;
    a.nhap();
    b.nhap();
    soAo s = a+ b;
    s.in();
    soAo h = a-b;
    h.in();
    soAo tich = a* b;
    tich.in();
    return 0;
}
