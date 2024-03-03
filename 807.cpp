#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DATA.in", "r", stdin);

    int n, m; cin >> n >> m;
    int x;
    set<int> s1, s2;

    for(int i = 0; i < n; i++) {
        cin >> x;
        s1.insert(x);
    }

    for(int i = 0; i < m; i++) {
        cin >> x;
        s2.insert(x);
    }

    map<int, int> mp;
    for(auto x : s1) mp[x]++;
    for(auto x : s2) mp[x]++;

    for(auto x : mp) {
        if(x.second == 2) cout << x.first << " ";
    }
}