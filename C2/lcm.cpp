#include<bits/stdc++.h>
using namespace std;

int euclid(int a, int b) {
    if (b==0) return a;
    else return euclid(b, a%b);
}

int lcm(int a, int b) {
    return a*b/euclid(a, b);
}

void isPrime(int n) {
    int cnt = 0;
    for(int i=2; i<=n/2; i++) {
        if(i%n == 0) {
            cnt++;
            break;
        }
    }

    if(cnt==0 && n!=1) {
        cout << "Prime.";
    } else {
        cout << "Not Prime.";
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    //cout << euclid(a, b) << endl;
    
    isPrime(lcm(a, b));

    return 0;
}