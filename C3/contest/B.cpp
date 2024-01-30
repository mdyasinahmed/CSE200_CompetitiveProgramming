#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n%(n%2==0)==0) {
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}