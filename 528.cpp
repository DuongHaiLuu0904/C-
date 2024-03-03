#include <bits/stdc++.h>
using namespace std;

int tt = 1;

struct SinhVien {
    int stt;
    string id, name, lop, email, cty;
};

void nhap(SinhVien &a) {
    a.stt = tt++;
    cin >> a.id;
    scanf("\n");
    getline(cin, a.name);
    cin >> a.lop >> a.email >> a.cty;
}

bool cmp(SinhVien a, SinhVien b) {
    return a.name < b.name;
}

void in(SinhVien a) {
    cout << a.stt << " " << a.id << " " << a.name << " ";
    cout << a.lop << " " << a.email << " " << a.cty << endl;
}

int main() {
    int n; cin >> n;
    SinhVien ds[n];

    for(int i = 0; i < n; i++) nhap(ds[i]);
    sort(ds, ds + n, cmp);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        for(int i = 0; i < n; i++) {
            if(s == ds[i].cty) in(ds[i]);
        }
    }
}