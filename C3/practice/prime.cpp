#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int div = 2, count = 0;
    while(div < n) {
        if(n%div == 0) {
            count++;
        }
        div++;
    }

    if(count > 0) {
        cout << "Not Prime" << endl;
    } else{
        cout << "Prime" << endl;
    }

    return 0;
}