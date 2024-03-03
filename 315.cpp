#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int i = s.size() - 2, j = i + 1;
        while(s[i] < s[i + 1]) i--;
        if(i < 0) {
            cout << "-1" << endl;
            continue;
        }
        while(s[j] >= s[i]) j--;

        while(s[j] == s[j - 1]) j--;

        swap(s[i], s[j]);
        cout << s << endl;
    }
}