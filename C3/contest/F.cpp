#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;

    int sqrtN = sqrt(n);

    for(int i=2; i <= sqrtN; ++i) {
        if(n%i == 0) return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int sum = 0;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                sum+=i;
            }
        }
        
        // cout << sum << endl;

        if(isPrime(sum)==true){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}