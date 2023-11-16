#include <bits/stdc++.h>

using namespace std;

struct Sv
{
    string name;
    string born;
    string add;
    double toan, ly , hoa;

    void nhap(){
        scanf("\n");
        getline(cin,this->name);
        getline(cin,this->born);
        getline(cin,this->add);
        cin >> this-> toan >> this-> ly >> this->hoa;
    }

    double tong(){
        return this->toan+ this->ly + this->hoa;
    }

    string check(){
        if (tong() < 24){
            return "TRUOT";
        }
        else return "DO";
    }

    void in(int k){
        cout << this->name << " " << this->born << " " << this->add << " "
        << this-> tong() << " ";
        if ( k == 1){
            cout << check();
        }
        cout << endl;
    }

};

int main(){
    int n; cin >> n;
    Sv a[n];
    double maxx = 0;
    for(int i = 0; i < n ; i++){
        a[i].nhap();
        maxx = max(a[i].tong(),maxx);
    }

    cout <<"DANH SACH THU KHOA :" << endl;
    for(int i = 0 ; i < n ; i++){
        if(a[i].tong() == maxx){
            a[i].in(0);
        }
    }
    cout << "KET QUA XET TUYEN:" << endl;
    for(auto x: a){
        x.in(1);
    }
    return 0;
}