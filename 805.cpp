#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;

    ifstream is1, is2;
    set<string> v1, v2;

    is1.open("DATA1.in");
    while(is1 >> x) {
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        v1.insert(x);
    }
    is1.close();

    is2.open("DATA2.in");
    while(is2 >> x) {
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        v2.insert(x);
    }
    is2.close();

    map<string, int> mp;
    for(auto x : v1) mp[x]++;
    for(auto x : v2) mp[x]++;

    for(auto x : mp) cout << x.first << " ";
    cout << endl;
    for(auto x : mp) {
        if(x.second > 1) cout << x.first << " ";
    }
}