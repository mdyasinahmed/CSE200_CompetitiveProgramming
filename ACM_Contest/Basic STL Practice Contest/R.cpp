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

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    v.erase(v.begin() + (a-1));
    v.erase(v.begin() + (b-1), v.begin() + (c-1));

    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }


    return 0;
}