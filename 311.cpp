#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int ds[26] = {0};
        for(int i = 0; i < s.size(); i++) {
            ds[s[i] - 'a'] ++;
        }

        int cnt = 0;
        for(auto x : ds) {
            cnt = max(cnt, x);
        }

        if(cnt <= (s.size() + 1) / 2) cout << "1" << endl;
        else cout << "0" << endl;
    }
}