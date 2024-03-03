#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int b[26] = {0};
        int k = s.size();
        for(int i = 0; i < s.size(); i++) {
            b[s[i] - 'a']++;
        }

        for(int i = 0; i < 26; i++) {
            k += (b[i] * (b[i] - 1) / 2);
        }
        cout << k << endl;
    }
}