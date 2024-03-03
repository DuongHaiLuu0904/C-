#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    long long tu, mau;
};

void rutgon(PhanSo &a) {
    long long k = __gcd(a.mau, a.tu);
    a.tu /= k;
    a.mau /= k;
}

void process(PhanSo a, PhanSo b) {
    PhanSo c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;
    c.tu *= c.tu;
    c.mau *= c.mau;
    rutgon(c);

    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    rutgon(d);

    cout << c.tu << "/" << c.mau << " ";
    cout << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}