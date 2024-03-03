#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1e4 + 1, 1);
void eratost() {
    v[0] = v[1] = 0;
    for(int i = 2; i <= 1e4; i++) {
        if(v[i]) {
            for(int j = i * i; j <= 1e4; j += i) v[j] = 0;
        }
    }
}

int main() {
    eratost();
    int t; cin >> t;
    for(int k = 0; k < t; k++) {
        cout << "Test " << k + 1 << ":" << endl;

        int n; cin >> n;
        int a[n * n], b[n][n];
        int dem = 1;
        for(int i = 0; i < n * n; i++) {
            while(v[dem] == 0) dem++;
            a[i] = dem++;
        }

        int row = n - 1, col = n - 1, id = 0, d = 0;

        while(d <= n / 2) {
            for(int i = d; i <= col; i++) b[d][i] = a[id++];
            for(int i = d + 1; i <= row; i++) b[i][col] = a[id++];
            for(int i = col - 1; i >= d; i--) b[row][i] = a[id++];
            for(int i = row - 1; i > d; i--) b[i][d] = a[id++];
            d++;
            row--;
            col--;
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) cout << b[i][j] << " ";
            cout << endl;
        }
    }
}