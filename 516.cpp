#include <bits/stdc++.h>
using namespace std;

int dem = 1;

struct MatHang {
    string id, name, nhom;
    double mua, ban, loi;
};

void nhap(MatHang &a) {
    a.id = to_string(dem++);
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.nhom);
    cin >> a.mua >> a.ban;
    a.loi = a.ban - a.mua;
}

void in(MatHang a) {
    cout << a.id << " " << a.name << " " << a.nhom << " ";
    cout << fixed << setprecision(2) << a.loi << endl;
}

bool cmp(MatHang a, MatHang b) {
    return a.loi > b.loi;
}

int main() {
    int n; cin >> n;
    MatHang ds[n];
    for(int i = 0; i < n; i++) nhap(ds[i]);
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++) in(ds[i]);
}