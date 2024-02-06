#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int MOD = 1e9 + 7;

int main() {
    ll n;
    cin >> n;

    ll a = (n * (n + 1) / 2) % MOD; // Sum of first n natural numbers
    ll b = 1; // n^n
    ll c = 1; // n!
    ll d = 0; // 2^n + 3^n

    for(ll i = 1; i <= n; i++) {
        b = (b * n) % MOD;
        c = (c * i) % MOD;
        d = (d + (pow(2, i) + pow(3, i)) % MOD) % MOD;
    }

    cout << a << " " << b << " " << c << " " << d;

    return 0;
}
