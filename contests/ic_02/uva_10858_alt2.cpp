/*
UVA 482 - Permutation Arrays
Recursão e vector
Alfredo L!ma
*/

#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > prints;

void gear( int valor , int div , vector<int> ans )
{
	for (int i = div ; i*i <= valor ; ++i)
	{
		if( valor % i == 0 )
		{
			ans.push_back(i);
			gear( valor/i , i , ans);
			ans.pop_back();
		}
	}
	ans.push_back(valor);
	prints.push_back( ans );
	ans.pop_back();
}

int main()
{
	int n;
	while( cin >> n , n )
	{
		prints.clear();
		gear( n , 2 , vector<int>() );
		prints.pop_back();
		cout << prints.size() << endl;
		for (int i = 0; i < prints.size() ; ++i)
		{
			for (int j = 0; j < prints[i].size() ; ++j)
			{
				if( j ) cout << " ";
				cout << prints[i][j];
			}
			cout << endl;
		}
	}
}
