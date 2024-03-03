#include <bits/stdc++.h>
using namespace std;
 
long long M = 1e9 + 7;

void Testcase() {
    long long n, x; cin >> n >> x;
    long long a[n];
    for(auto &y : a) cin >> y;
    long long P = 0, h = 1;
    for(int i = n - 1; i >= 0; i--) {
        P = (P + h * a[i]) % M;
        h = (h * x) % M;
    }
    cout << P << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}