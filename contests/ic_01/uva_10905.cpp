/*

UVA 10905 - Children's Game
STL
Matheus Inácio

*/

#include <bits/stdc++.h>

using namespace std;

string strs[51];
bool comp( const int &a, const int &b){
    string x = strs[a] + strs[b];
    string y = strs[b] + strs[a];
    return x > y;
}

int main(){
    int H[51];
    int N;
     while(scanf("%d", &N) == 1 && N){
        for( int i = 0; i < N; i++) {
            cin >> strs[i];
            H[i] = i;
        }
        sort(H , H + N, comp);
        for(int i = 0; i < N; i++) cout << strs[H[i]];
        printf("\n");
    }
    return 0;
}