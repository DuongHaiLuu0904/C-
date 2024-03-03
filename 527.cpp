#include <bits/stdc++.h>
using namespace std;

struct Time {
    int giay, phut, gio, thoigian;
};

void nhap(Time &a) {
    cin >> a.gio >> a.phut >> a.giay;
    a.thoigian = a.gio * 3600 + a.phut * 60 + a .giay;
}

void in(Time a) {
    cout << a.gio << " " << a.phut << " ";
    cout << a.giay << endl;
}

bool cmp(Time a, Time b) {
    return a.thoigian < b.thoigian;
}

int main() {
    int n; cin >> n;
    Time ds[n];
    for(int i = 0; i < n; i++) nhap(ds[i]);
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++) in(ds[i]);
}