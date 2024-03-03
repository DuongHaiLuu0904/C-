#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(auto &x : a) cin >> x;
        for(int i = 0; i < n - k; i++) {
            cout << *max_element(a + i, a + (i + k)) << " ";
        }
        cout << *max_element(a + n - k - 1, a + n) << endl;
    }
}