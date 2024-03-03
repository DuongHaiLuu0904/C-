#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, m; cin >> n >> m;
        long long sum = n * (n + 1) / 2;
        long long a = (sum + m) / 2;
        long long b = sum - a;

        if(a - b == m && __gcd(a, b) == 1) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}