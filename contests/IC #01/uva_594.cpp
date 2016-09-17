/*

UVA  594 - One Little, Two Little, Three Little Endians
STL
Matheus Inácio

*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, j;
    while(cin >> n) {
        int y = 0;
        for(i = 0; i < 4; i++) 
            y = (y << 8) | (( n >> (8 * i)) & 255);
        printf("%d converts to %d\n", n, y);
    }
    return 0;
}