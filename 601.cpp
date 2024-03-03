#include <bits/stdc++.h>
using namespace std;

class SinhVien {
    private:
        string id, name, lop, date;
        double gpa;
    public:
        void nhap() {
            id = "B20DCCN001";
            getline(cin, name);
            cin >> lop >> date >> gpa;
            cin.ignore();

            if(date.size() == 8)
                date = '0' + date.substr(0, 2) + '0' + date.substr(2);
            else if(date.size() == 9){
                if(date[1] == '/')
                    date = '0' + date;
                else 
                    date = date.substr(0,3) + '0' + date.substr(3);
            }
        }
        void xuat();
};

void SinhVien::xuat() {
    cout << id << " " << name << " " << lop << " " << date << " ";
    cout << fixed << setprecision(2) << gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}