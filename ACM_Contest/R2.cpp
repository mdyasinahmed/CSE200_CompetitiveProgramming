#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> V;

    for(int i=0; i<n; ++i) {
        int x;
        cin >> x;
        V.push_back(x);
    }

    int a, b, c;
    cin >> a >> b >> c;

    V.erase(V.begin() + (a-1));
    V.erase(V.begin() + (b-1), V.begin() + (c-1));

    cout << V.size() << endl;

    for(int i=0; i<V.size(); i++) {
        cout << V[i] << " ";
    }

    return 0;
}
