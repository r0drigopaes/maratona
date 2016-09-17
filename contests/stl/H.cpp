#include <bits/stdc++.h>
using namespace std;

int main() {
        int order, pos;
        do {
                cin >> order >> pos;
                if(order || pos) {
                        int i, line, collum;
                        line = collum = order/2 +1;
                        for(i = 1; i*i < pos; i += 2, ++line, ++collum);


                }
        } while(order || pos);
        return 0;
}
