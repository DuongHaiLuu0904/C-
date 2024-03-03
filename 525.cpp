#include <bits/stdc++.h>
using namespace std;

int stt = 1;

struct SinhVien {
    string id, name, lop;
    double diem1, diem2, diem3;
};

void nhap(SinhVien &a) {
    cin >> a.id;
    scanf("\n");
    getline(cin, a.name);
    cin >> a.lop >> a.diem1 >> a.diem2 >> a.diem3;
}

bool cmp(SinhVien a, SinhVien b) {
    return a.name < b.name;
}

void sap_xep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in_ds(SinhVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        cout << stt++ << " " << ds[i].id << " ";
        cout << ds[i].name << " " << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].diem1 << " " << ds[i].diem2 << " " << ds[i].diem3 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}