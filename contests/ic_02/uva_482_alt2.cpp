/*
UVA 482 - Permutation Arrays
Vector e strings
Alfredo L!ma
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc ;
	cin >> tc;
	while( tc-- )
	{
		
		int n;
		char c;
		vector<int> pos;
		while( scanf("%d%c", &n, &c ) , c != '\n' )
		{
			pos.push_back(n);
		}
		pos.push_back(n);
		vector<string> valores(pos.size());
		string a;
		for( int i = 0 ; i < pos.size() ; i++ )
		{
			cin >> a;
			valores[ pos[i]-1 ] = a;
		}
		for( int i = 0 ; i < valores.size() ; i++ )
		{
			cout << valores[i] << endl;
		}
		if( tc ) cout << endl;
	} 
}
