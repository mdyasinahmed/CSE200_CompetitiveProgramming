#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int kun;
        cin >> kun;
        
        float bahu = 360/(180- float(kun));

        if(bahu==(int)bahu) cout << "YES\n"; 
        else cout << "NO\n";
    }

    return 0;
}