#include <bits/stdc++.h>
using namespace std;

int search_last(int a[], int n, int l, int x) {
    int r = n - 1;
    int res = -1;
	while(l <= r) {
		int m = (l + r) / 2;
		if(a[m] == x) {
			res = m;
			l = m + 1;
		}
        else if(a[m] > x) r = m - 1;
		else l = m + 1;
	}
	return res;
}

int search_fisrt(int a[], int n, int l, int x) {
    int r = n - 1;
    int res = -1;
	while(l <= r) {
		int m = (l + r) / 2;
		if(a[m] == x) {
			res = m;
			r = m - 1;
		}
        else if(a[m] > x) r = m - 1;
		else l = m + 1;
	}
	return res;
}

void testcase() {
    int n, k; cin >> n >> k;
    int a[n];
    for(auto &x : a) cin >> x;
    sort(a, a + n);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int last = search_last(a, n, i, k - a[i]);
        int first= search_fisrt(a, n, i, k - a[i]);
        if(last != -1) {
            if(first == i) first++;
            cnt += (last - first + 1);
        }
    }
    cout << cnt << endl;
}

int main() {
    int t; cin >> t;
    while(t--) testcase();
}