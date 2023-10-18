#include<iostream>
#include<conio.h>
using namespace std;
 
const int Nmax=100;
class Vecto
{
private:
    float size[Nmax];
    int n;
public:
    void nhap();
    void thietlap(){n=5;}
    friend float tichvohuong(Vecto &x, Vecto &y);
    void xuat();
};
void Vecto::nhap()
{
    int i;
    for(i=0;i<n;i++)
        {
        cout<<"\nPhan tu thu: "<<i<<"\n";
        cin>>size[i];
        }
}
void Vecto::xuat()
{
    int i;
    cout<<"\nCac phan tu cua vector la: ";
    for(i=0;i<n;i++)
    cout<<size[i]<<" ";
}
float tichvohuong(Vecto &x, Vecto &y)
{
    int i;
    float s=0.0;
    for(i=0;i<x.n;i++)
    {
       s+=(x.size[i]*y.size[i]);
    }
    return s;
}
int main()
{
    Vecto V1,V2;
    cout<<"Nhap Vector 1:";
    V1.thietlap();
    V1.nhap();
    V1.xuat();
    cout<<"\nNhap Vector 2:";
    V2.thietlap();
    V2.nhap();
    V2.xuat();
    cout<<"\nTich vo huong cua 2 Vector la: "<<tichvohuong(V1,V2);
    getch();
}
