#include<bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;

    vector<int>v;

    for(int i=0; i<s; ++i) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<s; i++) {
        cout << v.at(i) << " ";
    }


    return 0;
}