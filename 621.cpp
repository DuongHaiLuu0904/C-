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

bool cmp(SinhVien a, SinhVien b) {
    return a.id < b.id;
}

int main() {
    SinhVien ds[1000], x;
    int n = 0;
    while(cin >> x) ds[n++] = x;
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++) cout << ds[i];
}