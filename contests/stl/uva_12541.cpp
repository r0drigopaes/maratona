/*
	UVA 12541 - Copying Anything
	Operator Overload
	Gio Martins
*/

#include <bits/stdc++.h>
using namespace std;

struct Person {
	string name;
	int day, month, year;
	
	Person(string n, int d, int m, int y) 
	: name(n), day(d), month(m), year(y) {}

	bool operator < (const Person& str) const {
		if(year > str.year) return true;
		if(year == str.year) {
			if(month > str.month) return true;
			if(month == str.month) {
				if(day > str.day) return true;
				if(day == str.day)
					if(name > str.name) return true;
			}
		}
		return false;
	}

	bool operator > (const Person& str) const {
		if(year < str.year) return true;
		if(year == str.year) {
			if(month < str.month) return true;
			if(month == str.month) {
				if(day < str.day) return true;
				if(day == str.day)
					if(name < str.name) return true;
			}
		}		return false;
	}
};

int main() {
	int n;
	cin >> n;
	vector<Person> vec;
	for(int i = 0; i < n; ++i) {
		string n;
		int d, m, y;
		cin >> n >> d >> m >> y;
		vec.push_back(Person(n, d, m, y));
	}

	sort(vec.begin(), vec.end(), greater<Person>());

	cout << vec[n-1].name << endl << vec[0].name << endl;
	return 0;
}

