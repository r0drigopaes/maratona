/*
UVA 482
Permutation Arrays
Matheus Inácio
*/

#include <bits/stdc++.h>

using namespace std;

typedef std::vector<int> vi;
typedef std::vector<double> vd;
typedef std::vector<string> vs;

int toInt(string str){
	int value = 0;
	for (int i = str.size() - 1,j = 0; i >= 0; --i, j++) {
		value += int(str[i] - '0')*pow(10, j);
	}
	return value;
}

vi extract(string str){
	str+=' ';
	string aux = "";
	vi indexs;
	for (int i = 0; i < str.size(); ++i) {
		if(str[i] == ' '){
			if(aux == "") continue;
			indexs.push_back(toInt(aux));
			aux = "";
			continue;
		}
		aux += str[i];
	}
	return indexs;
}

int main(int argc, char const *argv[]) {
	int t;

	scanf("%d", &t);
	getchar();
	while(t--){
		string str;
		getchar();
		getline(cin, str);
		// cout << "s:= " << str << endl;
		vi index = extract(str);
		vs value(index.size() + 1);
		for (int i = 0; i < index.size(); ++i) 
			cin >> value[index[i]];
		for (int i = 1; i < value.size(); ++i) 
			cout << value[i] << endl;
		if(t)
			cout << endl;
		getchar();
	}

	return 0;
}