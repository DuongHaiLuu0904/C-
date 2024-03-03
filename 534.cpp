#include <bits/stdc++.h>
using namespace std;

int check(string s) {
    if(s.size() < 2) return 0;
    int left = 0, right = s.size() - 1;
    while(left < right) {
        if(s[left] != s[right]) return 0;
        left++;
        right--;
    }
    return 1;
}

bool cmp(pair<string, int> a, pair<string, int> b) {
    if(a.first.size() != b.first.size()) 
        return a.first.size() > b.first.size();
    return a.first > b.first;
}

int main() {
    map<string, int> mp;
    string x;
    while(cin >> x) {
        if(check(x)) mp[x]++;
    }
    
    vector<pair<string, int>> v;
    for(auto x : mp) {
        v.push_back(make_pair(x.first, x.second));
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v) {
        cout << x.first << " " << x.second << endl;
    }
}