#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        cout << (n%1000000007*n%1000000007)%1000000007 << endl;
    }

    return 0;
}
