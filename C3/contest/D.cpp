#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i=0; i<=s.length(); i++) {
        int four=0, seven=0;
        if(s[i]=='4' || s[i]=='7') {
            if(s[i]=='4') {
                four++;
            } else{
                seven++;
            }
            if(seven>four) {
                cout << 7;
            } else{
                cout << 4;
            }
        } else{
            cout << -1;
        }
    }


    return 0;
}