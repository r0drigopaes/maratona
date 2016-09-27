/*
UVA 482 - Permutation Arrays
Bitset para marcar a posição e array circular
Alfredo L!ma
*/
#include <bits/stdc++.h>
using namespace std;

main()
{
	int qt;
	cin >> qt;
	while( qt -- )
	{
		int n, p;
		cin >> n >> p;
		vector<int> numb(n);
		bitset<110> Bits;
		int freq[10] = {0};
		int f;
		int ans  = 0;
		for( int i = 0; i < n ; ++i )
		{
			cin >> f;
			numb[i] = f;
			++freq[f];
		}
		int idx = 0;
		int fr = 9;
		while( true )
		{
			if( freq[fr] == 0 )
				--fr;
			else
			{
				if( !Bits[idx] )
				{
					if( numb[idx] == fr )
					{
						++ans;
						Bits[idx] =  true;
						--freq[fr];
					}
					if( idx == p && fr == numb[idx] && Bits[idx] )
					{
						break;
					}
				}
				++idx;
				if( idx == n ) idx = 0;
			}
		}
		cout << ans << endl;
	}
}
