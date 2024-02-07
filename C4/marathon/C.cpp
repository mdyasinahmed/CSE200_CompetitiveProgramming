#include<bits/stdc++.h>
using namespace std;

int main() {

    while(true) {
        long long int n;
        cin >> n;

        if(n==0) {
            break;
        }

        long long int a[n];
        for(int i=0; i<n; ++i) cin >> a[i];

        sort(a, a+n);

        for(int i=0; i<n; ++i) {
            cout << a[i];
            if(i<n-1) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}