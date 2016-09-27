/*
UVA 12100
Printer Queue
Circular Queue
Matheus Inácio
*/

#include <bits/stdc++.h>

using namespace std;

typedef std::vector<int> vi;
typedef std::vector<double> vd;
typedef std::vector<string> vs;
typedef pair<int, int> ii;
typedef std::vector<ii> vii;

int max(vii jobs, int index) {
	int max_value = index;
	for (int i = index; i < jobs.size(); ++i) {
		if(jobs[i].first > jobs[max_value].first)
		max_value = i;
	}
	return max_value;
}
vii enqueue(vii jobs, int index = 0){
	int max_index = max(jobs, index);
	if(index == jobs.size()) return jobs;
	for (int i = index; i < max_index; ++i)	{
		ii aux = jobs[index];
		jobs.erase(jobs.begin() + index);
		jobs.push_back(aux);		
	}
	return enqueue(jobs, index + 1);
}


int main(int argc, char const *argv[]){
	int t;
	scanf("%d", &t);

	while(t--){
		int job, myJob;
		cin >> job >> myJob;
		vii jobs;
		while(job--){
			int p;
			cin >> p;
			jobs.push_back({p, jobs.size()});
		}
		jobs = enqueue(jobs);
		for (int i = 0; i < jobs.size(); ++i) 
			if(jobs[i].second == myJob){
				cout << i + 1 << endl;
				break;
			}
	}
	return 0;
}

