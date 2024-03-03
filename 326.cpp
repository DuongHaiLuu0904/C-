#include <bits/stdc++.h>
using namespace std;

string nhan1(char a, string b) {
    string res = "";
    int tmp = 0;
    for(int i = b.size() - 1; i >= 0; i--) {
        tmp = (a - '0') * (b[i] - '0') + tmp;
        res.insert(0, 1, tmp % 10 + '0');
        tmp /= 10;
    }
    if(tmp > 0) res.insert(0, 1, tmp + '0');
    return res;
}

string cong(string a, string b) {
    if(a.size() > b.size()) 
        b.insert(0, a.size() - b.size(), '0');
    else 
        a.insert(0, b.size() - a.size(), '0');

    string res = "";
    int tmp = 0;
    for(int i = a.size() - 1; i >= 0; i--) {
        tmp = (a[i] - '0') + (b[i] - '0') + tmp;
        res.insert(0, 1, tmp % 10 + '0');
        tmp /= 10;
    }
    if(tmp > 0) res.insert(0, 1, tmp + '0');
    return res;
}

void Testcase() {
    string X, Y; cin >> X >> Y;
    string s, res = "";
    for(int i = X.size() - 1; i >= 0; i--) {
        s = nhan1(X[i], Y);
        s.insert(s.size(), X.size() - i - 1, '0');
        res = cong(res, s);
    }
    cout << res << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}