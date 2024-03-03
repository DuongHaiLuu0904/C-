#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

struct ThiSinh {
	string name;
	string date;
	float diem1;
	float diem2;
	float diem3;
	float sum;
};

void nhap(ThiSinh& a) {
	getline(cin, a.name); 
	cin >> a.date;
	cin >> a.diem1 >> a.diem2 >> a.diem3;
	a.sum = a.diem1 + a.diem2 + a.diem3;
}

void in(ThiSinh a) {
	cout << a.name << " " << a.date << " ";
	cout << fixed << setprecision(1) << a.sum;

}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}