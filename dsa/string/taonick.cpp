#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s; 
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while(ss >> tmp){
            for (int i = 0 ; i < tmp.size(); i++){
                if(isalpha(tmp[i])){
                    tmp[i] = tolower(tmp[i]);
                }
            }
            v.push_back(tmp);
        }
        string a = v[v.size() - 2];
        for(int i = 0 ; i < v.size() -2 ; i++){
            a+= v[i][0];
        }
        cout << a << "@xyz.edu.vn"<< endl;
        string b = v[v.size() - 1];
        if(b[3] == '0') b.erase(b.begin() + 3);
        if(b[0] == '0') b.erase(b.begin());
        for(int i = 0 ; i< b.size(); i++){
            if (isdigit(b[i])){
                cout << b[i];
            }
        }
        cout << endl;
    }
    return 0;
}