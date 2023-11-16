#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
	int a[n];
    int s1, s2;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < n; i++){
		if (a[i] % 2 == 0) s1+=a[i];
        else  s2+=a[i];
	}

    cout << s1 << " " << s2;
    return 0;
		
}