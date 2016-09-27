/*
UVA 700 - DATE BUGS
Sets
Alfredo L!ma
*/

#include <bits/stdc++.h>
using namespace std;

main()
{
	int computers;
	int tc = 0;
	while( cin >> computers , computers )
	{
		cout << "Case #" << ++tc << ":" << endl;
		int year, byear, eyear;
		cin >> year >> byear >> eyear;
		if( computers == 1 )
		{
			cout << "The actual year is " << year << ".\n";
		}
		else
		{
			set<int> ans;
			int diff = eyear - byear;
			for( int i = 0 ; i*diff + year < 10000 ; ++i )
				ans.insert( i*diff + year );
			for( int i = 0 ; i < computers -1 ; ++i )
			{
				set<int> aux;
				cin >> year >> byear >> eyear;
				diff = eyear - byear;
				for( int i = 0 ; i*diff + year < 10000 ; ++i )
					if( ans.count( i*diff + year) )
						aux.insert( i*diff + year );
				ans = aux;
			}
			
			if( ans.size() == 0 )
				cout << "Unknown bugs detected." << endl;
			else
			{
				for( auto p : ans )
				{
					cout << "The actual year is " << p << "." << endl;break;
				}
			}
		}
		cout << endl;
	}
	cout << endl;

}
