#include <bits/stdc++.h>
using namespace std;

int dem1 = 1;

class Phim {
public:
    string id, name, date, kind, sotap;


    friend istream &operator >> (istream &is, Phim &a) {
        string s = to_string(dem1++);
        while(s.size() < 3) s = '0' + s;
        a.id = 'P' + s;

        
    }
};


int main() {

}