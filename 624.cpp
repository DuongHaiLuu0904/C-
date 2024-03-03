#include <bits/stdc++.h>
using namespace std;

class SinhVien{
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

string doikitu(string s) {
    if (s == "Ke toan") return "KT";
    if (s == "Cong nghe thong tin") return "CN";
    if (s == "An toan thong tin") return "AT";
    if (s == "Vien thong") return "VT";
    if (s == "Dien tu") return "DT";
    return " ";
}

int main() {
    SinhVien ds[1000];
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> ds[i];

    int t; cin >> t; 
    while(t--) {
        scanf("\n");
        string s; getline(cin, s);
        string a = doikitu(s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;

        for(int i = 0; i < n; i++) {
            if(a == "CN" || a == "AT") {
                if(ds[i].id[5] == a[0] && ds[i].id[6] == a[1] && ds[i].lop[0] != 'E') {
                    cout << ds[i];
                }
            }
            else {
                if(ds[i].id[5] == a[0] && ds[i].id[6] == a[1]) {
                    cout << ds[i];
                }
            }
        }
    }
}