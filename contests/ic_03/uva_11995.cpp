#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) == 1){
		deque<int>que, st;
		priority_queue<int>pq;
		int a, b;
		int os= 1, oq = 1, op = 1;
		for(int i = 0; i < n; ++i){
			scanf("%d%d", &a, &b);
			if(a == 1){
				if(os)st.push_back(b);
				if(oq)que.push_back(b);
				if(op)pq.push(b);
			}else{
				if(os){
					if(!st.empty() && st.back() == b)st.pop_back();
					else os = 0;
				}
				if(oq){
					if(!que.empty() && que.front() == b)que.pop_front();
					else oq = 0;
				}
				if(op){
					if(!pq.empty() && pq.top() == b)pq.pop();
					else op = 0;
				}
			}
		}
		if(os+op+oq == 0)puts("impossible");
		else if(os+op+oq > 1)puts("not sure");
		else if(os)puts("stack");
		else if(oq)puts("queue");
		else puts("priority queue");
	}
	return 0;
}