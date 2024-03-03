#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

class NhanVien {
    public:
        string id, name, sex, address, tax, date;
        int day, month, year;

        friend istream &operator >> (istream &in, NhanVien &a) {
            a.id = "000";
            if(cnt < 10) a.id += "0" + to_string(cnt);
            else a.id += to_string(cnt);
            cnt++;

            scanf("\n");
            getline(cin, a.name);
            getline(in, a.sex);
            scanf("%d/%d/%d\n", &a.month, &a.day, &a.year);
            getline(in, a.address);
            getline(in, a.tax);
            getline(in, a.date);

            return in;
        }

        friend ostream &operator << (ostream &out, NhanVien a) {
            out << a.id << " " << a.name << " " << a.sex << " ";
            printf("%.2d/%.2d/%.4d ", a.day, a.month, a.year);
            out << a.address << " " << a.tax << " " << a.date << endl;
            return out;
        }
};

bool cmp(NhanVien a, NhanVien b) {
    if(a.year < b.year) return 1;
    if(a.year == b.year) {
        if(a.month < b.month) return 1;
        if(a.month == b.month) {
            if(a.day < b.day) return 1;
        }
    }
    return 0;
}

void sapxep(NhanVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}