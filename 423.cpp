#include <bits/stdc++.h>
using namespace std;

long long a[100];
void check() {
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i < 100; i++) {
        a[i] = a[i - 1] + a[i - 2]; 
    }
}

int main() {
    check();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << a[n] << endl;
    }
}