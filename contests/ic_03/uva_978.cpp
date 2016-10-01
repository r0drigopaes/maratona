#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int bat[N];
int main(){
	int tc, bt, gn, bn, x;
	scanf("%d", &tc);
	priority_queue<int>g, b;
	for(int tt = 0; tt < tc; ++tt){
		if(tt)puts("");	
		scanf("%d %d %d", &bt, &gn, &bn);
		for(int i = 0; i < gn; ++i){
			scanf("%d", &x);
			g.push(x);
		}
		for(int i = 0; i < bn; ++i){
			scanf("%d", &x);
			b.push(x);
		}
		while(!b.empty() && !g.empty()){
			int last = 0;
			for(int i = 0; i < bt; ++i){		
				if(b.empty() || g.empty()){
					break;
				}else{
					bat[i] = g.top()-b.top();
					g.pop();
					b.pop();
				}
				++last;
			}
			for(int j = last-1; j >=0; --j){
				if(bat[j] > 0)g.push(bat[j]);
				else if(bat[j] < 0)b.push(-bat[j]);
			}
		}
		if(!b.empty()){
			puts("blue wins");
			while(!b.empty()){
				printf("%d\n", b.top());
				b.pop();
			}
		}
		else if(!g.empty()){
			puts("green wins");
			while(!g.empty()){
				printf("%d\n", g.top());
				g.pop();
			}
		}
		else puts("green and blue died");
	}
}