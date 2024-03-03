#include <iostream>
#include <cmath>
#include <string>
#define ll long long

using namespace std;

ll ucln(ll a, ll b) {
	if (b == 0) return a;
	return ucln(b, a % b);
}

struct PhanSo {
	ll tu, mau;
};

void nhap(PhanSo &a) {
	cin >> a.tu >> a.mau;
}

void rutgon(PhanSo& a) {
	ll i = ucln(a.tu, a.mau);
	a.tu /= i;
	a.mau /= i;
}

void in(PhanSo a) {
	cout << a.tu << "/" << a.mau;
}

PhanSo tong(PhanSo& a, PhanSo& b) {
	PhanSo t;
	t.mau = a.mau * b.mau;
	t.tu = a.tu * b.mau + b.tu * a.mau;
	rutgon(t);
	return t;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}