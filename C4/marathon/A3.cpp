#include<bits/stdc++.h>
using namespace std;

void rotate(int a[], int d, int n) {
    int temp[n], k=0;

    for(int i=d; i<n; i++) {
        temp[k] = a[i];
        k++;
    }
    for(int i=0; i<d; i++) {
        temp[k] = a[i];
        k++;
    }
    for(int i=0; i<n; i++) a[i] = temp[i];
}


int main() {
    int n, d;
    cin >> n >> d;

    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    rotate(arr, d, n);

    for(int i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}