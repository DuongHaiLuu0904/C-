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
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for(int i = 0; i < n; i++) {
            if(ds[i].lop == s) {
                cout << ds[i];
            }
        }
    }
}