#include <bits/stdc++.h>
using namespace std;

struct DanhSach {
    int first, second;
};

int main() {
    DanhSach ds[10000];
    int n = 0;
    int x;
    while(cin >> x) {
        int check = 1;
        for(int i = 0; i < n; i++) {
            if(x == ds[i].first) {
                check = 0;
                ds[i].second++;
                break;
            }
        }
        if(check) {
            ds[n].first = x;
            ds[n].second = 1;
            n++;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ds[i].first << " " << ds[i].second << endl;
    }
}