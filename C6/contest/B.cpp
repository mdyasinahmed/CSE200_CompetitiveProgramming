#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int arr[t];

    int sumP = 0, sumN =0;
    for(int i=0; i<t; i++) {
        cin >> arr[i];
        if(arr[i]>=0) {
            sumP+=arr[i];
        } else {
            sumN+=arr[i];
        }
    }

    cout << sumP - sumN << endl;

    return 0;
}