#include <bits/stdc++.h>
using namespace std;
#define pb push_back

typedef vector<int> vi;

int main() {
        vi Set;

        int num;
        while(cin >> num) {
                Set.pb(num);
                sort(Set.begin(), Set.end());

                if(Set.size()&1)
                        cout << Set[Set.size()/2] << endl;
                else
                        cout << (Set[Set.size()/2] + Set[Set.size()/2 - 1])/2 << endl;
        }

        return 0;
}
