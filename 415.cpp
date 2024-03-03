#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        long long a[n], b[m];
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        sort(a, a + n,  greater<int>());
        sort(b, b + m);
        cout << a[0] * b[0] << endl;
    }
}