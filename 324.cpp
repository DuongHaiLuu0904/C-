#include <bits/stdc++.h>
using namespace std;

long long laydu(string a, long long M) {
    long long res = 0;
    for(int i = 0; i < a.size(); i++) {
        res = res * 10 + a[i] - '0';
        res %= M;
    }
    return res;
}

long long chiadu(long long a, long long b, long long M) {
    long long cnt = 1;
    while(b) {
        if(b % 2 == 1) {
            cnt *= a;
            cnt %= M;
        }
        a *= a;
        a %= M;
        b /= 2;
    }
    return cnt;
}

void Testcase() {
    string a;
    long long b, M;
    cin >> a >> b >> M;
    cout << chiadu(laydu(a, M), b, M) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}