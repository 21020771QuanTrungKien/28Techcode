#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

class product{
    private:
        string productcode;
        string productLine;
        string dvi;
        ll buy;
        ll sell;
    public:
        product(int ma, string productLine, string dvi, ll buy, ll sell){
            productcode = to_string(ma);
            while(productcode.size() < 4) productcode+= '0';
            productcode = "MH" +productcode;
            this->productLine = productLine;
            this->dvi = dvi;
            this->buy = buy;
            this->sell = sell;
        }

        ll profit(){
            return sell - buy;
        }

        void in(){
            cout << this->productcode << " " <<this->productLine << " "<< this->dvi << " " << this->buy << " " << this->sell
            << " " << this->profit() << endl;
        }

};
bool cmp(product a, product b){
    if(a.profit() != b.profit()){
        return a.profit() > b.profit();
    }
    return 0;
}

int main(){
    ll n; cin >> n;
    vector<product> v;
    cin.ignore();
    for(int i = 0 ; i < n; i++){
        string ten, dvi;
        int mua, ban;
        getline(cin,ten);
        getline(cin,dvi);
        cin >> mua >> ban;
        product x(i+1,ten,dvi, mua , ban);
        v.push_back(x);
    }
    stable_sort(v.begin(),v.end(),cmp);
    for (auto x: v) x.in();
    return 0;
}