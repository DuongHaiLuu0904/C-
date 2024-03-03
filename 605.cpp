#include <bits/stdc++.h>
using namespace std;

class PhanSo {
    private:
        long long tu, mau;
    public:
        PhanSo(long long, long long);
        void rutgon();

        friend istream &operator >> (istream &in, PhanSo &a) {
            in >> a.tu >> a.mau;
            return in;
        }
        friend ostream &operator << (ostream &out, PhanSo &a) {
            out << a.tu << "/" << a.mau;
            return out;
        }
};

PhanSo::PhanSo(long long tu, long long mau) {
    this->tu = tu;
    this->mau = mau;
}

void PhanSo::rutgon() {
    long long k = __gcd(tu, mau);
    tu /= k;
    mau /= k;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}