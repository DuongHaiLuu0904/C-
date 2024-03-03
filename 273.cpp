#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n; 
    int a[n + 1] = {0};
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    for(int i = 1; i <= n; i++) {
        int right = a[i - 1];
        int left = a[n] - a[i];
        if(right == left) {
            cout << i << endl;
            return;
        }
    }
    cout << "-1" << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}
