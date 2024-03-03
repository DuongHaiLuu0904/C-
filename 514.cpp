#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string id, name, lop, date;
    double gpa;
};

void nhap(SinhVien ds[], int n) {
    int dem = 1;
    for(int i = 0; i < n; i++) {
        string s = to_string(dem++);
        while(s.size() < 3) s = '0' + s;
        ds[i].id = "B20DCCN" + s;

        scanf("\n");
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].date >> ds[i].gpa;

        if(ds[i].date[2] != '/') ds[i].date.insert(0, "0");
        if(ds[i].date[5] != '/') ds[i].date.insert(3, "0");

        string tmp, str = "";
        stringstream ss(ds[i].name);
        while(ss >> tmp) {
            transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
            tmp[0] = toupper(tmp[0]);
            str += tmp + " ";
        }
        str.pop_back();
        ds[i].name = str;
    }
}

void in(SinhVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        cout << ds[i].id << " " << ds[i].name << " ";
        cout << ds[i].lop << " " << ds[i].date << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}