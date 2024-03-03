#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size() - 1; i++) {
        if(s[i - 1] == 'A' && s[i] == 'B' && s[i + 1] == 'A') {
            s[i] = 'A';
            cnt++;
        }
        if(s[i - 1] == 'B' && s[i] == 'A' && s[i + 1] == 'B') {
            s[i] = 'B';
            cnt++;
        }
    }

    if(s[0] == 'B' && s[1] == 'A') {
        s[0] = 'A';
        cnt++;
    }

    if(s[s.size() - 2] == 'A' && s[s.size() - 1] == 'B') {
        s[s.size() - 1] = 'A';
        cnt++;
    }

    for(int i = 0; i < s.size() - 1; i++) {
        if(s[i] != s[i + 1]) cnt++;
    }

    if(s[0] == 'A' && s[s.size() - 1] == 'B') cnt++;

    if(s[0] == 'B' && s[s.size() - 1] == 'B') cnt ++;

    cout << cnt;
}