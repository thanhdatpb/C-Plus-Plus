#include <iostream>
using namespace std;

int UCLN(int a,int b){
    if (a%b==0)
        return b;
    else
        return UCLN(b,a%b);
}
class PhanSo{
    private:
        int tu,mau;
        void rutGon(){
            int uc = UCLN(tu,mau);
            tu=tu/uc;
            mau=mau/uc;
        }
    public:
        void ganPS(int ,int);
        void inPS();
        PhanSo cong(PhanSo);
        PhanSo tru(PhanSo);
        PhanSo nhan(PhanSo);
        PhanSo chia(PhanSo);
};
void PhanSo::ganPS(int t,int m){
    tu = t;
    mau = m;
}
void PhanSo::inPS(){
    cout<<tu<<"/"<<mau<<endl;
}

PhanSo PhanSo::cong(PhanSo ps2){
    PhanSo kq;
    kq.tu = tu*ps2.mau+mau*ps2.tu;
    kq.mau = mau*ps2.mau;
    kq.rutGon();
    return kq;
}
PhanSo PhanSo::tru(PhanSo ps2){
    PhanSo kq;
    kq.tu = tu*ps2.mau-mau*ps2.tu;
    kq.mau = mau*ps2.mau;
    kq.rutGon();
    return kq;
}
PhanSo PhanSo::nhan(PhanSo ps2){
    PhanSo kq;
    kq.tu = tu*ps2.tu;
    kq.mau = mau*ps2.mau;
    kq.rutGon();
    return kq;
}
PhanSo PhanSo::chia(PhanSo ps2){
    PhanSo kq;
}
    


