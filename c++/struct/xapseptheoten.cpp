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
};
bool cmp(Sv a, Sv b){
    return a.name < b.name;
}
int main(){
    int n ; cin >> n ;
    Sv a[n];
    for(int i = 0; i < n; i++){
        a[i].nhap();
    }
    stable_sort(a,a+n,cmp);
    for (auto x: a){
        x.in();
    }
    return 0;
}