#include <bits/stdc++.h>

using namespace std;

class NV{
    private:
        string id;
        string name;
        string sex;
        string born;
        string add;
        string mt;
        string date;
    public:
        void nhap(){
            this->id = "00001";
            getline(cin,name);
            getline(cin,sex);
            getline(cin,born);
            getline(cin,add);
            getline(cin,mt);
            getline(cin,date);
        }

        string ngay(const string &born){
            string s = born;
            if (s[1] == '/') s = '0' + s;
            if (s[4] == '/') s.insert(3,"0");
            return s;
        }

        string ky(const string &date){
            string s = date;
            if (s[1] == '/') s = '0' + s;
            if (s[4] == '/') s.insert(3,"0");
            return s;
        }

        void in(){
            cout << this->id << " " << this->name << " " << this->sex << " " << this->ngay(born) << " " << this->add << " "
            << this->mt << " " << this->ky(date);
        }

};
int main(){
    NV a;
    a.nhap();
    a.in();
    return 0;
}