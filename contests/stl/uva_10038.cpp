/*
	UVA 10038 - Copying Anything
	STL - Set	
	Gio Martins
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	while(cin >> N) {
		vector<int> vi;
		set<int> si;
		int num, result;	

		for(int i = 0; i < N; ++i) {
			cin >> num;
			vi.push_back(num);
		}

		for(int i = 0; i < N-1; ++i) {
			result = abs(vi[i] - vi[i+1]);
			if((0 < result) && (result < N))
				si.insert(result);
		}

		if(si.size() == N-1)
			cout << "Jolly" << endl;	
		else
			cout << "Not jolly" << endl;
	}
        return 0;
}
