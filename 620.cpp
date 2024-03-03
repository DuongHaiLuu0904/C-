#include <bits/stdc++.h>
using namespace std;

class SinhVien {
    public:
        string id, name, lop, email;
        
        void nhap();
        void in();
};

void SinhVien::nhap() {
    cin >> id; cin .ignore();
    getline(cin, name);
    cin >> lop >> email;
}

void SinhVien::in() {
    cout << id << " " << name << " " << lop << " " << email << endl;
}

bool cmp(SinhVien a, SinhVien b) {
    if(a.lop == b.lop) return a.id < b.id;
    return a.lop < b.lop;
}

int main() {
    SinhVien ds[1000];
    int n; cin >> n;
    for(int i = 0; i < n; i++) ds[i].nhap();
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++) ds[i].in();
}