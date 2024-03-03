#include <bits/stdc++.h>
using namespace std;

void Sinh(int n, string s) {
    if(s.size() == n) {
        cout << s << " ";
        return;
    }
    Sinh(n, s + "0");
    Sinh(n, s + "1");
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        Sinh(n, "");
        cout << endl;
    }
}