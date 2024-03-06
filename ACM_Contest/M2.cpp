#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> V;

	int s;
    cin >> s;

	int c, T;

	for(int i=0; i<s; i++){
        cin >> c;

		switch(c){
		case 0:
			cin >> T;
			V.push_back(T);
			break;
		case 1:
			cin >> T;
			cout << V[T] << endl;
			break;
		case 2:
			V.pop_back();
			break;
		}
	}

	return 0;
}