#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DATA.in", "r", stdin);
    
    map<int, int> mp;
    int x;
    while(cin >> x) {
        mp[x]++;
    }
    for(auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }
}