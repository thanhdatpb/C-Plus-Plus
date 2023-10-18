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
	void nhap()
	{
		cout << "\nNhap ho dem: ";
		fflush(stdin);
		getline(cin, this->ho_dem);
		cout << "\nNhap ten: ";
		fflush(stdin);
		getline(cin, this->ten);
		cout << "\nNhap ngay sinh: ";
		cin >> this->ngay_sinh;
		cout << "\nNhap thang sinh: ";
		cin >> this->thang_sinh;
		cout << "\nNhap nam sinh: ";
		cin >> this->nam_sinh;
	}
	void xuat()
	{
		cout << "\nHo dem: " << this->ho_dem;
		cout << "\nTen: " << this->ten;
		cout << "\nNgay sinh: " << this->ngay_sinh;
		cout << "\nThang sinh: " << this->thang_sinh;
		cout << "\nNam sinh: " << this->nam_sinh;
	}
	bool operator>(Nguoi &nguoi)
	{
		if (this->ten > nguoi.ten)
		{
			return true;
		}
		else if (this->ten == nguoi.ten)
		{
			if (this->ho_dem > nguoi.ho_dem)
			{
				return true;
			}
		}
		return false;
	}
	// get
	string getHoDem()
	{
		return this->ho_dem;
	}
	string getTen()
	{
		return this->ten;
	}
	int getNgaySinh()
	{
		return this->ngay_sinh;
	}
	int getThangSinh()
	{
		return this->thang_sinh;
	}
	int getNamSinh()
	{
		return this->nam_sinh;
	}
};
class Sinhvien : public Nguoi
{
private:
	int ma_sv;
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

	// get
	int getMaSv()
	{
		return this->ma_sv;
	}
	int getDiemTb()
	{
		return this->diem_tb;
	}
};

// Nhập vào danh sách n sinh viên

void nhapDanhSachSinhVien(Sinhvien *ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin sinh vien thu " << i + 1;
		ds[i].nhap();
	}
}

// Sắp xếp danh sách sinh viên theo thứ tự tăng dần của tên và họ đệm

void sapXepDanhSachSinhVien(Sinhvien *ds, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i] > ds[j])
			{
				Sinhvien temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}

// Xuat danh sach sinh vien

void xuatDanhSachSinhVien(Sinhvien *ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nThong tin sinh vien thu " << i + 1 << endl;
		ds[i].xuat();
	}
}

// In ra những sinh viên có điểm trung bình cao nhất

void inRaSinhVienCoDiemTbCaoNhat(Sinhvien *ds, int n)
{
	int max = ds[0].getDiemTb();
	for (int i = 1; i < n; i++)
	{
		if (ds[i].getDiemTb() > max)
		{
			max = ds[i].getDiemTb();
		}
	}
	cout << "\nDanh sach sinh vien co diem trung binh cao nhat: ";
	for (int i = 0; i < n; i++)
	{
		if (ds[i].getDiemTb() == max)
		{
			ds[i].xuat();
		}
	}
}

int main()
{
	int n;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;

	Sinhvien *ds = new Sinhvien[n];
	nhapDanhSachSinhVien(ds, n);

	sapXepDanhSachSinhVien(ds, n);

	cout << "\nDanh sach sinh vien sau khi sap xep la: ";
	xuatDanhSachSinhVien(ds, n);

	inRaSinhVienCoDiemTbCaoNhat(ds, n);
}
