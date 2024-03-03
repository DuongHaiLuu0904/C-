#include <bits/stdc++.h>
using namespace std;

struct Person {
    string name, date;
};

bool cmp(Person a, Person b) {
    int s[8] = {6, 7, 8, 9, 3, 4, 0, 1};
    for(int i = 0; i < 8; i++) {
        if(a.date[s[i]] > b.date[s[i]]) return 1;
        if(a.date[s[i]] < b.date[s[i]]) return 0;
    }
    return 0;
}

int main() {
    int n; cin >> n;
    Person ds[n];
    for(int i = 0; i < n; i++) {
        cin >> ds[i].name >> ds[i].date;
    }
    sort(ds, ds + n, cmp);
    cout << ds[0].name << endl << ds[n - 1].name;
}