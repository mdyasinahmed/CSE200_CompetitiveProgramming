#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    set<int> S;
    for(int i=0; i<t; i++) {
        int x=0, s=0;
        cin >> x >> s;

        switch(x) {
            case 1:
                S.insert(s);
                break;
            case 2:
                S.erase(s);
                break;
            default:
                if(S.find(s) == S.end()) {
                    cout << "No" << endl;
                } else{
                    cout << "Yes" << endl;
                }
                break;
        }
    }

    return 0;
}
