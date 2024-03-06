#include <bits/stdc++.h>
using namespace std;

int main() {
    int k = 1, n;

    for(cin >> n; k <= n; k++) {
        string strI = "http://www.lightoj.com/";
        string str;
        
        stack<string> f, b;
        cout << "Case " << k << ":" << endl;

        b.push(strI);
        while(cin>>strI) {
            if(strI == "QUIT")
                break;
            if(strI == "VISIT") {
                cin >> strI;
                cout << strI << endl;
                b.push(strI);
                while(!f.empty()){
                    f.pop();
                }
            } else if(strI == "BACK" && b.size() > 1){
                str = b.top();
                b.pop();
                cout << b.top() << endl;
                f.push(str);
            } else if(strI == "FORWARD" && !f.empty()){
                b.push(f.top());
                cout << f.top() << endl;
                f.pop();
            } else{
                cout << "Ignored" << endl;
            }
        }
    }

    return 0;
}
