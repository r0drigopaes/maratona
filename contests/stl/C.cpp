#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	while(scanf("%d", &N) != EOF) {
		vector<int> vi;
		set<int> si;
		int num, now = 1;
		bool result = true;	

		for(int i = 0; i < N; ++i) {
			cin >> num;
			vi.push_back(num);
		}

		for(int i = 0; i < N-1; ++i)
			si.insert(abs(vi[i] - vi[i+1]));

		if(si.size() != N-1) {
			result = false;
		} else {
			for(auto x : si) {
				if(x != now) result = false;
				++now;
			}
		}

		if(result == true)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}
        return 0;
}
