#include <bits/stdc++.h>
using namespace std;


int n, a[100], ok;

void Ktao() {
    for(int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void sinh() {
    int i = n;
    while(i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0; 
    else a[i] = 1;
}

void TestCase() {
    cin >> n;
    ok = 1;
    Ktao();
    while(ok) {
        for(int i = 1; i <= n; i++) cout << a[i];
        cout << " ";
        sinh();
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
        cout << endl;
    }
}