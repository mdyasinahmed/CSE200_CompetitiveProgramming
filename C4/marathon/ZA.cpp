#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>arr){
    int st=0;
    vector<int>v;
    v=arr;
    int ans=0;
    int n=v.size();
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++){
        int req=v[i];
        while(st<n && arr[st]!=req){
            st++;
            ans++;
        }  
        st++;

        if(st>=n){
            break;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    
    vector<int>arr;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << solve(arr) << endl;


    return 0;
}