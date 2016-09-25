#include <bits/stdc++.h>
using namespace std;

int main()
{
	bitset<8> years(string("11111111"));
	bitset<8> m1, m2;
	m1.set();
	m2.set();
	m1 <<= 2;
	cout << m1.to_string() << endl;
	m2 <<= 6;
	cout << m2.to_string() << endl;

	m2 = ~m2;
	cout << m2.to_string() << endl;
	m1 = m1&m2;
	// m >>= 1;
	cout << m1.to_string() << endl;
	

	// years = (years & m);
	// cout << years.to_string() << endl;
	return 0;
}

