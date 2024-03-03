#include <bits/stdc++.h>
using namespace std;

class GiangVien {
public:
    string id, name, subject;
    string mon;

    friend istream &operator >> (istream &is, GiangVien &a) {
        scanf("\n");
        getline(cin, a.name);
        getline(cin, a.subject);

        stringstream ss1(a.subject);
        string tmp, s1 = "";
        while(ss1 >> tmp) s1 += toupper(tmp[0]);
        a.mon = s1;
        
        return is;
    }

    friend ostream &operator << (ostream &os, GiangVien a) {
        cout << a.id << " " << a.name << " " << a.mon << endl;
        return os;
    }
};

bool check(string a, string b) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);

    return (a.find(b) != string::npos);
}

int main() {
    GiangVien ds[100];
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> ds[i];

        ds[i].id = "GV" + to_string(i + 1);
        if (i + 1 < 10) ds[i].id.insert(2, "0");
    }

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0; i < n; i++) {
            if(check(ds[i].name, s)) cout << ds[i];
        }
    }
}