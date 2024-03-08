#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;

    while(cin >> t, t) {
        int x;
        priority_queue<long long int> Q;
        long long int sum = 0;
        
        while(t--) { 
            cin >> x;
            Q.push(-x);
        }
        while(Q.size() > 1) {
            long long int A, B;
            A = Q.top();
            Q.pop();
            B = Q.top();
            Q.pop();
            sum += -A-B;
            Q.push(A+B);
        }
        cout << sum << endl;
    }

    return 0;
}