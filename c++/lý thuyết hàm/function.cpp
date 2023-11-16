#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int mod = 1e9 + 7; 
typedef long long ll;

bool checkprime(long long n) {
    if (n < 2) return false;
    for (int i = 2 ; i <= sqrt(n) ; i++) {
        if ( n%i == 0) return false;
    }
    return true;
}
int uoclonnhalasont(long long n) {
    long long max1 = 0;
    for(long long i = 2; i <=sqrt(n); i++) {
        if (n % i == 0) {
            max1 = max(max1,i);
            while ( n % i == 0) {
                n/=i;
            }
        }
    }  
    if (n!= 1) max1 = n;
    return max1;
}
// tra ve tong cac chu so  
int tong(int n){
    int sum = 0;
    while(n){
        sum+= n%10;
        n/=10;
    }
    return sum;
}

bool smith(int n){
    int tong1 = tong(n);
    int tong2 = 0;
    int tmp = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                tong2 += tong(i);
                n /= i;
            }
        }
    }
    if(tmp == n) return false;
    if(n > 1) tong2 += tong(n);
    return tong1 = tong2;
}
bool soSphenic(long long n){
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n%i==0) {
            cnt ++;
            int mu = 0;
            while (n%i == 0) {
                mu++;
                n/=i;
            }
            if (mu > 1) return false;
        }
    }
    if (n!=1) cnt ++;
    if (cnt == 3) return true;
    else return false;

}

int baccuaso0 (long long n, long long p ){
    long long ans = 0;
    while( n>= p) {
        ans =+ n/p;
        ans = ans % mod;
        n /= p;
    }
    return ans;
}
int baccuathuasonguyento(long long n, long long p) {
    long long ans = 0;
    while (n >=p) {
        ans += n/p;
        n /= p;
    }
    return ans;
}

void pt1 (long long n) {
    long cnt ;
    for (long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0) {
            cnt = 0 ;
            while (n % i == 0) {
                cnt ++;
                n/=i;
            }
            cout << i << "^" << cnt;
            if (n!=1) cout << " * ";
        }
    }
    if (n!=1) cout << n << "^" << 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
 
}