#include <bits/stdc++.h>
using namespace std;

class NhanVien {
    private:
        string id, name, sex, brith, address, tax, date;
        static int dem;
    public:
        void nhap();
        void xuat();
};

int NhanVien::dem = 0;

void NhanVien::nhap() {
    dem++;
    this->id = string(5 - to_string(dem).size(), '0') + to_string(dem);
    getline(cin, name);
    cin >> sex >> brith; cin.ignore();
    getline(cin, address);
    cin >> tax >> date; cin.ignore();
}

void NhanVien::xuat() {
    cout << id << " " << name << " " << sex << " ";
    cout << brith << " " << address << " " << tax << " " << date << " ";
}

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
