#include <bits/stdc++.h>
using namespace std;

class KhachHang {
    private:
        string mkh, nameKH, sex, date, address;
    public:

};

class MatHang  {
public:
    string mmh, tmh, dvt;
    int gm, gb;
};

class HoaDon {
public:
    
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}