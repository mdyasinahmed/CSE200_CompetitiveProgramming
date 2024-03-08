#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    map<string, int> M;
    int c, x;
    string S;
    for(int i=0; i<t; ++i) {
        cin >> c;
        switch(c){
            case 0:
                cin >> S >> x;
                M[S] = x;
                break;
            case 1:
                cin >> S;
                if(M.find(S) != M.end())
                    cout << M[S] << endl;
                else
                    cout << 0 << endl;
                break;
            case 2:
                cin >> S;
                M.erase(S);
                break;
            default:
                string L, R;
                cin >> L >> R;

                auto it1 = M.lower_bound(L), it2 = M.upper_bound(R);
                while(it1 != it2) {
                    cout << it1->first << ' ' << it1->second << endl;
                    it1++;
                }
                break;
        }
    }

    return 0;
}