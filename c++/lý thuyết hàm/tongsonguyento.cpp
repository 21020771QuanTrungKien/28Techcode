#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find_gcd(int A, int B)
{
    // Trường hợp đặc biệt: A = 0 thì gcd(A, B) = B, ngược lại B = 0 thì gcd(A, B) = A.
    if (A == 0)
        return B;
    else if (B == 0)
        return A;

    while (A != B)
    {
        if (A > B)
            A -= B;
    	else 
	    B -= A;
    }

    return A;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a; int b;
    cin >> a >> b;
    for (int i = a; i < b; i++) {
        for (int j = i+1; j <= b; j++) {
            if (find_gcd(i,j) == 1) cout << "(" << i << "," << j << ")" << endl ;
        }
    }
    return 0;
}