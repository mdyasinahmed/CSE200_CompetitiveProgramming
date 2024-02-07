#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& arr, int k){
    int n = arr.size();
    vector<int> temp(arr.size());

    for(int i=0; i<arr.size(); i++) {
        temp[(i+k)%arr.size()] = arr[i];
    }

    for(int i=0; i<n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    rotate(arr, k);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}