#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int summingSeries(int s){
    int sum = 0;
    for(int i=1; i<=s; i++) {
        int n = pow(i, 2) - pow(i-1, 2);
        sum+=n;
        n=0;
    }

    return (sum)%MOD;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        cout << summingSeries(n) << endl;
    }

    return 0;
}