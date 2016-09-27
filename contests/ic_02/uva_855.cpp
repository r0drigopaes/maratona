/*
UVA 855
Lunch in Grid City
Matheus Inácio
*/

#include<bits/stdc++.h>

using namespace std;


int main() {
    int a,s,f,t;
    cin >> t;
    while(t--) {
        cin >> s >> a >> f;
        std::vector<int> street(f), avenue(f);
        for(int i = 0;i < f; i++)
            cin >> street[i] >> avenue[i];

        sort(street.begin(), street.end());
        sort(avenue.begin(), avenue.end());

        if(f%2 == 0)
        	f--;
        cout << "(Street: " << street[f/2] << ", Avenue: " << avenue[f/2] << ")" << endl;
    }
}