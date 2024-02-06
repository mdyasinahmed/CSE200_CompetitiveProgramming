#include<bits/stdc++.h>
using namespace std;


bool solve(int kun) {
    if(kun<3) {
        return false;
    }

    return (180*(kun-2))%kun == 0 && kun<1809;
}


int main() {
    int t;
    cin >> t;

    while(t--) {
        int ang;
        cin >> ang;
        if(solve(ang)){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }

    return 0;
}