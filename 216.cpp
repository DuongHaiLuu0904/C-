#include <bits/stdc++.h>
using namespace std;

bool check(int a[], int l, int r) {
    for(int i = l; i < r; i++) {
        if(a[i] > a[i + 1]) {
            for(int j = i; j < r; j++) 
                if(a[j] <= a[j + 1]) return false;
        }
    }
    return true;
}

void Testcase() {
    int n; cin >> n;
    int a[n]; 
    for(auto &x : a) cin >> x;
    int l, r; cin >> l >> r;
    if(check(a, l, r)) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}