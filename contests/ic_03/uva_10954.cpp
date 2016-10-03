#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int main(){
	int n;
	while(scanf("%d", &n), n){
		multiset<int>st;
		int x;
		for(int i = 0; i < n; ++i){
			scanf("%d",&x);
			st.insert(x);
		}	
		long long ans = 0;
		n--;
		while(n--){
			int a = *st.begin();
			st.erase(st.begin());
			int b = *st.begin();
			st.erase(st.begin());
			ans+=(a+b);
			st.insert(a+b);
		}
		printf("%lld\n", ans);
	}
	return 0;
}