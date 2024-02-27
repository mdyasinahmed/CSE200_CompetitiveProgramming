#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n, sum=0;
    cin >> a >> b;

    if(b>a) {
        n = b-a;
    } else {
        n = a -b;
    }



    if(n/2 == 1) {
        sum = 2;
    } else {
        for(int i=1; i<=(n/2)+1; i++) {
        sum+=i;
    }

    for(int i=n/2; i>=1; i--) {
        sum+=i;
    }
    }

    cout << sum << endl;


    return 0;
}