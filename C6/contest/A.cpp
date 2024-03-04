#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n, sum=0;
    cin >> a >> b;
    
    n = abs(a-b);

    while(a!=b) {
        if(a<b) {
            a++;
        } else {
            b++;
        }
        count++;
    }
    cout << sum << endl;


    return 0;
}