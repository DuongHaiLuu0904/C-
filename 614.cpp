#include <bits/stdc++.h>
using namespace std;

int dem = 1;

class NhanVien {
    private:
        string id, name, sex, brith, address, tax, date;
    public:
        friend istream &operator >> (istream &in, NhanVien &a) {
            // chuẩn hóa id
            string s = to_string(dem++);
            while(s.size() < 5) s = '0' + s;
            a.id = s;

            scanf("\n");
            getline(in, a.name);
            in >> a.sex >> a.brith;
            scanf("\n");
            getline(in, a.address);
            in >> a.tax >> a.date;

            return in;
        }

        friend ostream &operator << (ostream &out, NhanVien a) {
            out << a.id << " " << a.name << " " << a.sex << " ";
            out << a.brith << " " << a.address << " ";
            out << a.tax << " " << a.date << endl;
            return out; 
        }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}