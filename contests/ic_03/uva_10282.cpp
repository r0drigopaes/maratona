#include <bits/stdc++.h>
using namespace std;
map<string, string>mp;
int main(){
	string s, a, b;
	while(getline(cin, s)){
		if(s == "")break;
		stringstream ss;
		ss.str(s);
		ss >> a >> b;
		mp[b] = a;
	}
	while(cin >> s){
		if(mp.count(s))cout << mp[s] << endl;
		else cout << "eh\n";
	}
	return 0;
}