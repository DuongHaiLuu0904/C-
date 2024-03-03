#include <bits/stdc++.h>
using namespace std;


int main() {
    freopen("VANBAN.in", "r", stdin);

    set<string> s;
    string i;
    while(cin >> i) {
        transform(i.begin(), i.end(), i.begin(), ::tolower);
        s.insert(i);
    }
    for(auto x : s) {
        cout << x << endl;
    }
}