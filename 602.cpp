#include <bits/stdc++.h>
using namespace std;

class SinhVien {
    public:
        string id = "B20DCCN001", name, lop, date;
        double gpa;

        friend istream &operator >> (istream &in, SinhVien &a) {
            getline(in, a.name);
            in >> a.lop >> a.date >> a.gpa;

            if(a.date.size() == 8)
		        a.date = '0' + a.date.substr(0, 2) + '0' + a.date.substr(2);
	        else if(a.date.size() == 9){
                if(a.date[1] == '/')
                    a.date = '0' + a.date;
                else 
                    a.date = a.date.substr(0,3) + '0' + a.date.substr(3);
            }
            return in;
        }

        friend ostream &operator << (ostream &out, SinhVien &a) {
            out << a.id << " " << a.name << " " << a.lop << " " << a.date << " ";
            out << fixed << setprecision(2) << a.gpa;
            return out;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
