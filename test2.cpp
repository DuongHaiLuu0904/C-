#include <bits/stdc++.h>
using namespace std;

int dem = 1;

class NhanVien {
public:
    string id, name, chuc;
    long long luong, cong;
    long long thang, thuong, phucap, thunhap;

    friend istream &operator >> (istream &is, NhanVien &a) {
        string s = to_string(dem++);
        while(s.size() < 2) s = '0' + s;
        a.id = "NV" + s;

        getline(cin, a.name);
        cin >> a.luong >> a. cong >> a.chuc;

        a.thang = a.luong * a.cong;
        
        if(a.cong >= 25) a.thuong = a.thang / 5;
        else if(a.cong >= 22) a.thuong = a.thang / 10;
        else a.thuong = 0;

        if(a.chuc == "GD") a.phucap = 250000;
        if(a.chuc == "PGD") a.phucap = 200000;
        if(a.chuc == "TP") a.phucap = 180000;
        if(a.chuc == "NV") a.phucap = 150000;

        a.thunhap = a.thang + a.thuong + a.phucap;

        return is;
    }

    friend ostream &operator << (ostream &os, NhanVien a) {
        cout << a.id << " " << a.name << " ";
        cout << a.thang << " " << a.thuong << " ";
        cout << a.phucap << " " << a.thunhap << endl;

        return os;
    }
};

int main() {
    NhanVien a;
    cin >> a;
    cout << a;
}