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

            string s = to_string(dem++);
            while(s.size() < 3) s = '0' + s;
            a.id = "B20DCCN" + s;

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

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}