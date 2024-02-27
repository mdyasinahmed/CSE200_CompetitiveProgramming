#include<bits/stdc++.h>
using namespace std;


long long int digitSum(long long int n) {
    long long int sum=0, m;
    while(n>0) {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    return sum;
}

int main() {
    long long int n;
    cin >> n;


    long long int part1, part2;

    if(n%2 == 0) {
        part1 = (n/2)+1;
    } else {
        part1 = (n/2);
    }

    part2 = n - part1;

    cout << digitSum(part1)+digitSum(part2) << endl; 

    return 0;
}