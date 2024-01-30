#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n, a=0, b=1, c=1, d, d1=1, d2=1;
    cin >> n;

    for(long long int i=1;i<=n;i++) {
        a+=i;
        b*=n;
        c*=i;
        d1*=2;
        d2*=3;
    }

    cout << a << " " << b << " " << c << " " << d1+d2;

    return 0;
}