#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    map<string, int> M;
    int v1, v2;
    string S;

    for(int i=0; i<t; ++i) {
        cin >> v1;
        switch (v1) {
            case 0: {
                cin >> S >> v2;
                M[S] = v2;
                break;
            }
            case 1: {
                cin >> S;
                if(M.count(S) != 0) {
                    cout << M[S] << endl;
                } else {
                    cout << 0 << endl;
                }
                break;
            }
            default: {
                cin >> S;
                M.erase(S);
                break;
            }
        }

    }

    return 0;
}