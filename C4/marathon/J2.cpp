#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll summingSeries(ll n) {
    return (ll)pow(n, 2) % (ll)(1e9 + 7);
}

int main() {
    int t;
    cin >> t;

    for(int i=0; i<t; i++) {
        ll n;
        cin >> n;

        ll result = summingSeries(n);

        cout << result << endl;
    }

    return 0;
}
