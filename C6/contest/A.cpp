#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n, sum=0;
    cin >> a >> b;

    while(a!=b) {
        if(a<b) {
            a++;
        } else {
            b++;
        }
        sum++;
    }
    cout << sum << endl;


    return 0;
}