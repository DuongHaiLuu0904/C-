#include <bits/stdc++.h>
using namespace std;

int stt = 1;

class GiangVien {
public:
    string id, name, subject;
    string mon;

    friend istream &operator >> (istream &is, GiangVien &a) {
    
        scanf("\n");
        getline(cin, a.name);
        getline(cin, a.subject);
        
        string tmp, s1 = "";
        stringstream ss(a.subject);
        while(ss >> tmp) {
            s1 += toupper(tmp[0]);
        }
        a.mon = s1;

        return is;
    }

    friend ostream &operator << (ostream &os, GiangVien a) {
        cout << a.id << " " << a.name << " " << a.mon << endl;
        return os;
    }
};

int main() {
    GiangVien ds[100];
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> ds[i];

        ds[i].id = "GV" + to_string(i + 1);
        if (i + 1 < 10) ds[i].id.insert(2, "0");
    }

    int t; cin >> t; cin.ignore();
    while(t--) {
        string s; getline(cin, s);
        
        string tmp, a = "";
        stringstream ss(s);
        while(ss >> tmp) {
            a += toupper(tmp[0]);
        }

        cout << "DANH SACH GIANG VIEN BO MON " << a << ":" << endl;

        for(int i = 0; i < n; i++) {
            if(a == ds[i].mon) cout << ds[i];
        }
    }
}