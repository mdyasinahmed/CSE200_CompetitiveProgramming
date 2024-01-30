#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    if(n <= 1) return false;

    int div = 2, count = 0;
    while(div < n) {
        if(n%div == 0) {
            count++;
        }
        div++;
    }

    if(count > 0) {
        return false;
    } else{
        return true;
    }
}


int main() {
    int n;
    cin >> n;


    return 0;
}