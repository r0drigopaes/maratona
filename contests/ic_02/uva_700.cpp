/*
UVA 700
Date Bugs
Bitset
Rodrigo Paes
*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

// Exclui o intervalo entre from e to
// inclusivo, exclusivo
void exclude_interval(int from, int to, bitset<MAX> &bits)
{	
	if (to<=from) return;
	static bitset<MAX> m1, m2;
	
	m1.set();
	m2.set();	
	if (from>=0 && from <MAX)
	{
		m1 <<= from;	
	}	
	m2 <<= to;
	// inverte m2, assim, os bits de antes ficam todos como 1
	m2 = ~m2;
	// interseção, então o intervalo será 1. Depois nega, criando uma máscara com o intervalo 0 e o resto 1
	m1 = ~(m1&m2);
	// exclui todos os anos da máscara
	bits = m1 & bits;				
}

int main()
{
	bitset<MAX> years;
	bitset<MAX> mask;
	int last_year, diff, last_exclusion;
	int n, y, a, b, tc = 0, j;
	bool found;
	scanf("%d", &n);
	while (n!=0)
	{
		tc++;
		found = false;
		last_year = 0;
		years.set(); // seta todo mundo como 1 (todos os anos são possíveis)
		for (int i=0; i<n; ++i)
		{
			scanf("%d%d%d", &y, &a, &b);

			
			if ( y > last_year)
			{
				last_year = y;
			}
			
			diff = b-a;
			last_exclusion = y+1;
			for (j=1; (y + (j * diff))< MAX; j++)
			{				
				// seta todos os bits antes de (y + ((j-1) * diff) como 0
				// // seta todos os bits antes de (y + ((j) * diff)) como 0
				last_exclusion = (y + ((j) * diff));
				exclude_interval((y + ((j-1) * diff) + 1), last_exclusion, years);
			}
			// exclui o último intervalo			
			exclude_interval(last_exclusion+1, MAX, years);


		}
		// todos os anos anteriores ao maior ano não são possíveis
		mask.set(); // seta todo mundo como 1		
		mask <<= last_year; // seta tudo antes do last_year como 0		
		years &= mask; // exclui de years todos os anos antes de last_year
		
		printf("Case #%d:\n", tc);

		for (int i=0; i<MAX; ++i)
		{
			if (years.test(i))
			{
				printf("The actual year is %d.\n\n",i);
				found = true;
				break;
			}
		}

		if (!found)
		{
			printf("Unknown bugs detected.\n\n");
		}

		scanf("%d", &n);
	}



	return 0;
}