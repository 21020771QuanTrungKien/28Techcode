#include <bits/stdc++.h>
#include <iomanip>
#include <string>

using namespace std;

struct Sv
{
    string name;
    string add;
    string born;
    double gpa;

    void nhap(){
        cin.ignore();
        getline(cin,name);
        getline(cin,born);
        getline(cin,add);
        cin >> this->gpa;
    }

    void in(){
        cout << this-> name << " "<< this-> born<< " " << this-> add << " "<< fixed << setprecision(2)<<this-> gpa << endl;
    }
    
    bool check(){
        string s = this->ngaysinh;
        if (s[1] == '/')
            s.insert(0, "0");
        if (s[4] == '/')
            s.insert(3, "0");
        if (s[4] == '4')
            return true;
        return false;
    }
};
int main(){
    int n ; cin >> n ;
    Sv a[n];
    for(int i = 0; i < n; i++){
        a[i].nhap();
    }
    for (auto x: a){
        if(check(x)){
            x.in();
        }
    }
    return 0;
}