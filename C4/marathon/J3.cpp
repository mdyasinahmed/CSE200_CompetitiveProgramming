#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        int sum = 0;
        for(int i=1; i<=n; i++) {
            int T = pow(i, 2) - pow(i-1, 2);
            sum+=T;
            T=0;
        }

        cout << sum%1000000007 << endl;
    }

    return 0;
}