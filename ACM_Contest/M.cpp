#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> V;

	int nq;
    cin >> nq;

	int cmd, temp;

	for(int i=0; i<nq; i++){
        cin >> cmd;

		switch(cmd){
		case 0:
			cin >> temp;
			V.push_back(temp);
			break;
		case 1:
			cin >> temp;
			cout << V[temp] << endl;
			break;
		case 2:
			V.pop_back();
			break;
		}
	}

	return 0;
}