#include <bits/stdc++.h>
using namespace std;

int dem = 1;

class Phim {
public:
    string id, name, date, sotap, theloai;

    friend istream &operator >> (istream &is, Phim &a) {
        string s = to_string(dem++);
        while(s.size() < 3) s = '0' + s;
        a.id = 'P' + s;
        cin >> a.theloai;
        cin >> a.date; 
        cin.ignore();
        getline(cin, a.name);
        cin >> a.sotap;

        return is;
    }

    friend ostream &operator << (ostream &os, Phim a) {
        cout << a.id << " ";
        cout << a.theloai << " " << a.date << " ";
        cout << a. name << " " << a.sotap << endl;
        return os;
    }
};

struct loai {
    string id, loai;
};

int main() {
    int n, m; cin >> n >> m;
    Phim ds[m];
    loai a[n];

    int dem = 0;
    for(int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, a->loai);
        
        string s = to_string(dem++);
        while(s.size() < 3) s = "0" + s;
        a[i].id = "TL" + s;
    }

    for(int i = 0; i < m; i++) cin >> ds[i];

    for(int i = 0; i < m; i++) {
        
        for(int i = 0; i < n; i++){ 
            if(ds[i].theloai == a[i].id) {
                ds[i].theloai = a[i].loai;
            }
        }
        
    }
    for(int i = 0; i < m; i++) {
        cout << ds[i];
    }
}