#include <bits/stdc++.h>
using namespace std;

int dem = 1;

class SinhVien {
    private:
        string id, name, lop, date;
        double gpa;
    public:  
        friend istream &operator >> (istream &in, SinhVien &a) {
            in.ignore();
            getline(in, a.name);
            in >> a.lop >> a.date >> a.gpa;

            // chuẩn hóa mã sinh viên
            string s = to_string(dem++);
            while(s.size() < 3) s = '0' + s;
            a.id = "B20DCCN" + s;
            
            // chuẩn hóa họ tên
            transform(a.name.begin(), a.name.end(), a.name.begin(), ::tolower);
            string tmp, str = "";
            stringstream ss(a.name);
            while(ss >> tmp) {
                tmp[0] = toupper(tmp[0]);
                str += tmp + " ";
            }
            str.pop_back();
            a.name = str;

            // chuẩn hóa ngày sinh
            if (a.date[2] != '/') a.date.insert(0, "0");
            if (a.date[5] != '/') a.date.insert(3, "0");
            return in;
        }

        friend ostream &operator << (ostream &out, SinhVien a) {
            out << a.id << " " << a.name << " " << a.lop << " ";
            out << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
};

int main() {
    SinhVien ds[50];
    int N, i; cin >> N;
    for(i = 0; i < N; i++) {
        cin >> ds[i];
    }
    for(i = 0; i < N; i++) {
        cout << ds[i];
    }
    return 0;
}