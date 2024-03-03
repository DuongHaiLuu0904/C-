#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> s;
    int x;
    while(n--) {
        cin >> x;
        s.insert(x);
    }
    for(auto x : s) {
        cout << x << " ";
    }
}