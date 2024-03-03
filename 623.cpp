#include <bits/stdc++.h>
using namespace std;

class SinhVien {
public:
    string id, name, lop, email;

    friend istream &operator >> (istream &is, SinhVien &a) {
        cin >> a.id; cin.ignore();
        getline(cin, a.name);
        cin >> a.lop >> a.email;
        return is;
    }

    friend ostream &operator << (ostream &os, SinhVien a) {
        cout << a.id << " " << a.name << " ";
        cout << a.lop << " " << a.email << endl;
        return os;
    }
};

int main() {
    SinhVien ds[1000];
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> ds[i];
    
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
        cout << endl;
        for(int i = 0; i < n; i++) {
            if(ds[i].lop[1] == s[2] && ds[i].lop[2] == s[3]) {
                cout << ds[i] << endl;
            }
        }
    }
}