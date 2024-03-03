#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n + 1] = {0}, b[n + 1] = {0};
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] +=a[i - 1];
        }
        for(int i = 1; i <= n; i++) {
            cin >> b[i];
            b[i] +=b[i - 1];
        }

        int cnt = 0;
        for(int i = 1; i < n; i++) {
            for(int j = i; j <= n; j++) {
                if(a[j] - a[i - 1] == b[j] - b[i - 1])
                    cnt = max(cnt, j - i + 1);
            }
        }
        cout << cnt << endl;
    }
}
