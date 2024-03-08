#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int n, x;
    string S;
    map<string, int> M;
    
    
    for(int i=0; i<t; ++i) {
        cin >> n;
        
        switch(n) {
            case 0: {
                cin >> S >> x;
                M[S] = x;
                break;
            }
            case 1: {
                cin >> S;
                cout << M[S] << endl;
                break;
            }
            default:
                break;
        }

    }
  
  return 0;
}