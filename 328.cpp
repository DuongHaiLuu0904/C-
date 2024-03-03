#include <bits/stdc++.h>
using namespace std;

int check(string s, int k) {
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        int tmp = 0;
        for(int j = i; j < s.size(); j++) {
            tmp = tmp * 10 + (s[j] - '0');
            tmp %= k;
            if(tmp == 0) cnt++;
        }
    }
    return cnt;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        cout << check(s, 8) - check(s, 24) << endl;
    }
}