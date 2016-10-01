#include <bits/stdc++.h>
using namespace std;
vector<string>v;
bool comp(const string &a, const string &b){
	if(a.size() != b.size()) return a.size() < b.size();
	else return a < b;
}
void run(char c, string s){
	s.push_back(c);
	v.push_back(s);
	if(s.size() == 5)return;
	char l = s[s.size()-1];
	for(int i = l+1; i <= 'z'; ++i){
		run(char(i), s);
	}
}
int main(){
	for(int i = 'a'; i <= 'z'; ++i){
		run((char)i, "");
	}
	sort(v.begin(), v.end(), comp);
	unordered_map<string, int>mp;
	int id = 1;
	for(auto s : v){
		mp[s] = id++;
	}
	string s;
	while(cin >> s){
		if(mp.count(s))printf("%d\n", mp[s]);
		else puts("0");
	}
	return 0;
}