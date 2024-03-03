#include <bits/stdc++.h>
using namespace std;

class Cty {
public:
    string id, name;
    int soluong;

    friend istream &operator >> (istream &is, Cty &a) {
        cin >> a.id; cin.ignore();
        getline(cin, a.name);
        cin >> a.soluong;
        return is;
    }

    friend ostream &operator << (ostream &os, Cty a) {
        cout << a.id << " " << a.name << " " << a.soluong << endl;
        return os;
    }

};

bool cmp(Cty a, Cty b) {
    if(a.soluong == b.soluong) return a.id < b.id;
    return a.soluong > b.soluong;
}

int main() {
    int n; cin >> n;
    Cty ds[100];
    for(int i = 0; i < n; i++) cin >> ds[i];
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++) cout << ds[i];
}