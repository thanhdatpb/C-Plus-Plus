#include "bits/stdc++.h"
using namespace std;
class Nguoi
{
private:
    string ho_dem;
    string ten;
    int ngay_sinh;
    int thang_sinh;
    int nam_sinh;

public:
    void nhap();
    void xuat();
    void getHodem(string ho_dem);
    void getTen(string ten);
    void getNgaysinh(int ngay_sinh);
    void getThangsinh(int thang_sinh);
    void getNamsinh(int nam_sinh);
    string getHodem();
    string getTen();
    int getNgaysinh();
    int getThangsinh();
    int getNamsinh();
    bool operator>(Nguoi &nguoi);
};

void Nguoi::getHodem(string ho_dem){
	this->ho_dem=ho_dem;
}
void Nguoi::getTen(string ten){
	this->ten=ten;
}
void Nguoi::getNgaysinh(int ngay_sinh){
	this->ngay_sinh=ngay_sinh;
}
void Nguoi::getThangsinh(int thang_sinh){
	this->thang_sinh=thang_sinh;
}
void Nguoi::getNamsinh(int nam_sinh){
	this->nam_sinh=nam_sinh;
}
string Nguoi::getHodem(){
	this->ho_dem;
}
string Nguoi::getTen(){
	this->ten;
}
int Nguoi::getNgaysinh(){
	this->ngay_sinh;
}
int Nguoi::getThangsinh(){
	this->thang_sinh;
}
int Nguoi::getNamsinh(){
	this->nam_sinh;
}

void Nguoi::nhap()
{
	cout << "Nhap ho dem: ";
	fflush(stdin);
	getline(cin, this->ho_dem);
	cout << "Nhap ten: ";
	fflush(stdin);
	getline(cin, this->ten);
	cout << "Ngay sinh: ";
	cin >> this->ngay_sinh;
	cout << "Thang sinh: ";
	cin >> this->thang_sinh;
	cout << "Nam sinh: ";
	cin >> this->nam_sinh;
}
void Nguoi::xuat()
{
	cout << "\nHo dem: "<<this->ho_dem;
	cout << "\nTen: "<<this->ten;
	cout << "\nNgay sinh: "<<this->ngay_sinh;
	cout << "\nThang sinh: "<<this->thang_sinh;
	cout << "\nNam sinh: "<<this->nam_sinh;
}
bool Nguoi::operator>(Nguoi &nguoi)
{
	if(this->ten > nguoi.ten)
	{
		return true;
	}
	else if(this->ten == nguoi.ten)
	{
		if(this->ho_dem > nguoi.ho_dem)
		{
			return true;
		}
	}
	return false;
}
class Sinhvien : public Nguoi
{
private:
	string ma_sv;
	int diem_tb;

public:
	void nhap()
	{
		Nguoi::nhap();
		cout << "Nhap ma sinh vien: ";
		cin >> this->ma_sv;
		cout << "Nhap diem trung binh: ";
		cin >> this->diem_tb;
	}
	void xuat()
	{
		Nguoi::xuat();
		cout << "\nMa sinh vien: " << this->ma_sv;
		cout << "\nDiem trung binh" << this->diem_tb;
	}
	void getMaSv(string ma_sv){
		this->ma_sv=ma_sv;
	}
	void getDiemTb(int diem_tb){
		this->diem_tb=diem_tb;
	}
	string getMaSv()
	{
		return this->ma_sv;
	}
	int getDiemTb()
	{
		return this->diem_tb;
	}
};

void nhapDanhSachSV(Sinhvien *ob, int n){
	for(int i=0; i<n; i++){
		cout<<"Nhap thong tin sinh vien: "<<i+1;
		ob[i].nhap();
	}
}

void sapxepSV(Sinhvien *ob, int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(ob[i]>ob[j]){
				Sinhvien temp = ob[i];
				ob[i]=ob[j];
				ob[j]=temp;
			}
		}
	}
}
void xuatDanhSachSV(Sinhvien *ob, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nThong tin sinh vien: " <<i+1;
		ob[i].xuat();
	}
}
void DiemTb(Sinhvien *ob, int n) {
	
}
int main(){
	int n;
	cout<<"Nhap so luong sinh vien: ";
	cin>> n;
	Sinhvien *ob = new Sinhvien[n];
	nhapDanhSachSV(ob, n);
	sapxepSV(ob, n);
	cout<<"Danh sach sinh vien sau khi sap xep la: ";
	xuatDanhSachSV(ob, n);
}

