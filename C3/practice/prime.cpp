#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;


    if(n <= 1){
        cout << "Not Prime" << endl;
    } else {
        int div = 2, count = 0;
        while(div < n) {
            if(n%div == 0) {
                count++;
            }
            div++;
        }

        if(count > 0) {
            cout << "Not Prime" << endl;
        } else{
            cout << "Prime" << endl;
        }
    }

    return 0;
}