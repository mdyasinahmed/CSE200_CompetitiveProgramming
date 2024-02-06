#include<bits/stdc++.h>
#define s 100
using namespace std;

int main() {
    int n, i, arr[s];

    i=0;
    while(cin >> n) {
        if(n == 0) {
            return 0;
        } else{
            cin >> arr[i];
            sort(arr, arr+n);
            
        }
        i++;
    }
    cout << arr[i];

    return 0;
}