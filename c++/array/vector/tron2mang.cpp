#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    // Trộn 2 mảng
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < n1){
        arr3[k++] = arr1[i++];
    }
     while (j < n2){
        arr3[k++] = arr2[j++];
    }
}

int main()
{
int t;
cin >> t;
while (t--)
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    int arr3[n + m];
    mergeArrays(arr1, arr2, n, m, arr3);
    for (int i = 0; i < n + m; i++)
    cout << arr3[i] << " ";
    cout << endl;
}
    return 0;
}