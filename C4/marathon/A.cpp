#include<bits/stdc++.h>
using namespace std;


// int solve(int a[], int n){
//     int i, j, count = 0;

//     for(i=0; i<n-1; ++i){
//         for(j=0; j<n-i-1; ++j){
//             if(a[j]>a[j+1]){
//                 swap(a[j], a[j+1]);
//                 count++;
//             }
//         }
//     }

//     return count;
// }

int main() {
    int n, count = 0;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];

    }
    cout << "Minimum exchange operations : " << count;

    // cout << "Minimum exchange operations : " << solve(a, n);

    return 0;
}