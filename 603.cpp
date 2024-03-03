#include <bits/stdc++.h>
using namespace std;

class SinhVien {
private:
    string id, name, lop, date;
    double gpa;

public:
    friend istream &operator >> (istream &is, SinhVien &a) {
        a.id = "B20DCCN001";
        getline(cin, a.name);
        cin >> a.lop >> a.date >> a.gpa;

        string tmp, str = "";
        stringstream ss(a.name);
        while(ss >> tmp) {
            transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
            tmp[0] = toupper(tmp[0]);
            str += tmp + " ";
        }
        str.pop_back();
        a.name = str;

        if(a.date[2] != '/') a.date.insert(0, "0");
        if(a.date[5] != '/') a.date.insert(3, "0");

        return is;
    }

    friend ostream &operator << (ostream &os, SinhVien a) {
        cout << a.id << " " << a.name << " ";
        cout << a.lop << " " << a.date << " ";
        cout << fixed << setprecision(2) << a.gpa;
        return os;
    }
};

int main() {
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}