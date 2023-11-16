#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Time{
    private:
        int g, p, s;
    public:
        void nhap(){
            cin >> this->g >> this->p >> this->s;
        }
        void in(){
            cout << this->g << " " << this->p << " " << this->s << endl;
        }
        int getg(){
            return this->g;
        }
        int getp(){
            return this->p;
        }
        int gets(){
            return this->s;
        }
};

bool cmp(Time a, Time b){
    if(a.getg()!= b.getg()){
        return a.getg()< b.getg();
    }
    else{
        if(a.getp() != b.getp()){
            return a.getp() < b.getp();}
        else{
            if(a.gets() != b.gets()){
                return a.gets() < b.gets();
            }
        }
    }
}

int main(){
    int n ; cin >> n;
    Time a[n];
    for(int i = 0 ; i < n ; i++){
        a[i].nhap();
    }
    stable_sort(a,a+n,cmp);
    for(auto x: a) x.in();
    return 0;
}