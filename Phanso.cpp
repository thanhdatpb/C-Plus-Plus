#include <iostream>
using namespace std;

class ps;
{
	private:
		int Tu;
		int Mau;
	ps a[100];
int n;
 
void nhap()
{
    freopen("test.inp", "r", stdin);
    cin>> n;
    for (int i=1; i<=n; i++)
        cin >> a[i].tu>>a[i].mau;
}
 
void xuat()
{
    for (int i=1; i<=n; i++)
        cout << a[i].tu<< "/" <<a[i].mau<<endl;
}
 
int ucln(int a, int b)
{
    int r;
    while (a%b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return b;
}
 
 
ps tongps()
{
    int i,z;
    ps tmp=a[1];
    for (i=2; i<=n; i++)
    {
        tmp.tu = tmp.tu*a[i].mau + tmp.mau*a[i].tu;
        tmp.mau = tmp.mau*a[i].mau;
        z=ucln(tmp.tu, tmp.mau);
        tmp.tu /=z;
        tmp.mau /=z;
    }
    return tmp;
}
 
 
void xuli()
{
    ps tong = tongps();
    cout << "Tong PS = "<<tong.tu<< "/"<< tong.mau;
}
 
int main()
{
    nhap();
    xuat();
    xuli();
    return 0;
}