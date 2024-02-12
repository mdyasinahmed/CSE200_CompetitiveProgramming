#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int r[n], d[n-1], cnt=0, rs=1000;
    
    cin >> r[0];

    for(int i=1; i<n; i++) {
        cin >> r[i];
        d[i] = r[i] - r[i-1];
        cnt = max(cnt, d[i]);
    }

    for(int i=2; i<n; i++)
        rs = max(min(rs, d[i] + d[i-1]), cnt);

    cout << rs << endl;
    
    return 0;
}