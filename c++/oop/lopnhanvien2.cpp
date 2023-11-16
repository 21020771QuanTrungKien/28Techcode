#include <bits/stdc++.h>
#include <string>

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
        
        string ten(const string &name){
            string s = name;
            for (int i = 0; i < s.size(); i++) {
                if (i == 0 || s[i - 1] == ' ') {
                    s[i] = toupper(s[i]);
                }
                else s[i] = tolower(s[i]);
            }
            return s;
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
            cout << this->id << " " << this->ten(name) << " " << this->sex << " " << this->ngay(born) << " " << this->add << " "
            << this->mt << " " << this->ky(date);
        }

};
int main(){
    NV a;
    a.nhap();
    a.in();
    return 0;
}