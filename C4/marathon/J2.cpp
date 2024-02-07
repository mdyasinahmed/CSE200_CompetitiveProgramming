#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0; i<t; i++) {
        long int n;
        cin >> n;
        ll mod = pow(10, 9) + 7;
        cout << (ll)pow((n % mod), 2%mod) % mod << endl;
    }

    return 0;
}
