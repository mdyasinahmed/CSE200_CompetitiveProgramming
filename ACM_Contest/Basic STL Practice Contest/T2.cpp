#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x, y, i;

    while(cin>>x>>y) {
        long long int arr[x+1];

        for (i=0; i<x; i++)
            cin >> arr[i];

        sort(arr, arr+x);

        long long int sum = 0;
        for(i=0; i<x; i++) {
            sum += arr[i] * y;
            if (y > 1)
                y--;
        }

        cout << sum << endl;
    }

    return 0;
}
