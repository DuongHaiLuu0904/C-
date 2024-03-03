#include <bits/stdc++.h>
using namespace std;

void testcase() {
    int n; cin >> n;
    int a[n], f[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i == 0) f[i] = a[i];
        else f[i] = f[i - 1] + a[i];
    }

    for(int i = 1; i < n - 1; i++) {
        int l = f[i -1];
        int r = f[n -1] - f[i];
        if(l == r) {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << "-1" <<  endl;
}

int main() {
    int t; cin >> t;
    while(t--) testcase();
}