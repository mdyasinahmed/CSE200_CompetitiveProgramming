#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, nq;
	cin >> n >> nq;

    vector<int> V[1000];
	int cmd, A, B;

	for(int i=0; i<nq; i++){

		cin >> cmd;

		switch(cmd){
		case 0:
			cin >> A >> B;
			V[A].push_back(B);
			break;

		case 1:
			cin >> A;
			if(V[A].size() == 0){
                cout << endl;
			}else{
				cout << V[A][0];
				for(int j=1; j<V[A].size(); j++){
					cout << " " << V[A][j];
				}
				cout << endl;
			}
			break;

		case 2:
			cin >> A;
			V[A].clear();
			break;
		}
	}

	return 0;
}