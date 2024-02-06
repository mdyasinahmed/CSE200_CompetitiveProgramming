#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int a;
    while(t--) {
        cin >> a;

        if(a < 180/3) {
            cout << "NO" << endl;
        } else{
            cout << "YES" <<endl;
        }
    }

    return 0;
}