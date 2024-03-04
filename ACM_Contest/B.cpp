#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map <string,int> m;
    
    for(int i=0; i<N; i++) {
        int q;
        cin >> q;

        string s; 
        if(q == 1){
            int y;
            cin >> s;
            cin >> y;
            m[s] += y;
        } else if(q==2) {
            cin >> s;
            m.erase(s);
        } else {
            cin >> s;
            map<string,int>::iterator itr=m.find(s);
            
            if(itr != m.end()) cout<<m[s]<<endl;
            else cout<<0<<endl;
        }
    }
    
    return 0;
}