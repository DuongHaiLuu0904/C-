#include <bits/stdc++.h>
using namespace std;

int dem = 1;

struct NhanVien {
    string id, name, sex, birth, address, tax, date; 
};

void nhap(NhanVien &a) {
    string s = to_string(dem++);
    while(s.size() < 5) s = "0" + s;
    a.id = s;

    scanf("\n");
    getline(cin, a.name);
    cin >> a.sex >> a.birth;
    scanf("\n");
    getline(cin, a.address);
    cin >> a.tax >> a.date;
}

void inds(NhanVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        cout << ds[i].id << " " << ds[i].name << " ";
        cout << ds[i].sex << " " << ds[i].birth << " ";
        cout << ds[i].address << " " << ds[i].tax << " ";
        cout << ds[i].date << endl;
    }
}

bool cmp(NhanVien a, NhanVien b) {
    int s[8] = {6, 7, 8, 9, 0, 1, 3, 4};
    for(int i = 0; i < 8; i++) {
        if(a.birth[s[i]] < b.birth[s[i]]) return 1;
        if(a.birth[s[i]] > b.birth[s[i]]) return 0;
    }
    return 0;
}

void sapxep(NhanVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}