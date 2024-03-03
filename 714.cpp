#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int X[n];
        for(int i = 0; i < n; i++) {
            cin >> X[i];
        }
        prev_permutation(X, X + n);
        for(auto a : X) cout << a << " ";
        cout << endl;
    }
}