#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, i;
    
    while(cin >> n >> m) {
        long long a[n+1];

        for(i=0; i<n; i++) cin>>a[i];
        
        sort(a,a+n);

        long long t=0;
        for(i=0; i<n; i++){
            t += a[i]*m;
            if(m>1) m--;
        }

        cout << t << endl;
    }
    
    return 0;
}