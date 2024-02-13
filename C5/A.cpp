#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int c = 0;

	queue<int> mQue;

    int t, x;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        if(s == "push_back") {
            cin >> x;
            mQue.push(x);
            cout << x;
        }
    }
	
	// mQue.front();
	// mQue.push(0);
	// mQue.push(9);
	// mQue.push(4);
	


	// while(!mQue.empty()) {
	// 	mQue.pop();
	// 	c++;
	// }
	// cout << c;
}
