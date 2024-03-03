#include <bits/stdc++.h>
using namespace std;

int dem = 1;

class GiangVien {
public:
    string id, name, subject;
    string ten;

    friend istream &operator >> (istream &is, GiangVien &a) {
        // chuẩn hóa id
        string s = to_string(dem++);
        while(s.size() < 2) s = '0' + s;
        a.id = "GV" + s;

        scanf("\n");
        getline(cin, a.name);
        getline(cin, a.subject);

        string tmp;

        stringstream ss1(a.name);
        string s1;
        while(ss1 >> tmp) {
            s1 = tmp;
        }
        a.ten = s1;

        stringstream ss2(a.subject);
        string s2 = "";
        while(ss2 >> tmp) {
            s2 += toupper(tmp[0]);
        }    
        a.subject = s2;
        return is;
    }

    friend ostream &operator << (ostream &os, GiangVien a) {
        cout << a.id << " " << a.name << " " << a.subject << endl;
        return os;
    }
};

bool cmp(GiangVien a, GiangVien b) {
    if(a.ten == b.ten) return a.id < b.id;
    return a.ten < b.ten;
}

int main() {
    GiangVien ds[100];
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> ds[i];
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++) cout << ds[i];
}