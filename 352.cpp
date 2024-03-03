#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t; cin.ignore();

    vector<string> vec;
    while(t--) {
        string s; getline(cin, s);
        
        vector<string> v;
        string tmp, str = "";
        stringstream ss(s);
        while(ss >> tmp) {
            transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
            v.push_back(tmp);
        }

        str = str + v[v.size() - 1];
        for(int i = 0; i < v.size() - 1; i++) {
            str = str + v[i][0];
        }
        vec.push_back(str);
    }

    for(int i = 0; i < vec.size(); i++) {
        int d = 0;
        for(int j = 0; j < i; j++) {
            if(vec[i] == vec[j]) d++;
        }

        cout << vec[i];
        if(d > 0) cout << d + 1;
        cout << "@ptit.edu.vn" << endl;
    }
}