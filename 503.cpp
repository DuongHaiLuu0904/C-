#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

struct PhanSo {
	long long x, y;
};

void nhap(PhanSo& a) {
	cin >> a.x >> a.y;
}

void rutgon(PhanSo &a) {
	long long tmp1 = a.x, tmp2 = a.y;
	a.x /= gcd(tmp1, tmp2);
	a.y /= gcd(tmp1, tmp2);
}

void in(PhanSo a) {
	cout << a.x << "/" << a.y;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}