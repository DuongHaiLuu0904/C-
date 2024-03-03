#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k; cin >> n >> k;
        long long x = 0;
        for(int i = 1; i <= n; i++) {
            x += i % k;
        }
        cout << (x == k) << endl;
    }
}