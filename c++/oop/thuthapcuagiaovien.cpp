#include <bits/stdc++.h>

using namespace std;

class GV{
    private:
        string ma;
        string name;
        string salary;
    public:
        void nhap(){
            getline(cin,ma);
            getline(cin,name);
            getline(cin,salary);
        }

        long long phucap(){
            string pos = ma.substr(0,2);
            if (pos == "HT") {
                return 2000000;
            }
            else if (pos == "HP") {
                return 900000;
            }
            else {
                return 500000;
            }
        }

        long long heso(){
            string levelStr = ma.substr(2, 2);
            int level = stoi(levelStr);
            return level;
        }
        long long luong(){
            long long level = this->heso();
            long long allow = this->phucap();
            long long income = salary + level * allow;
            return income 
        }
  
        void in(){
            cout << this->ma << " " << this->name << " " << this->heso() << " " << this->luong(); 
        }
};

int main(){
    GV a;
    a.nhap();
    a.in();
    return 0;
}