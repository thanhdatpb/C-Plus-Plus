#include<iostream>

using namespace std;

int main(){
	class Person{
	private:
    string ho_dem;
	  string ten;
	  int tuoi;
	 public:
  void nhap()
	{
		cout << "\nNhap ho dem: ";
		fflush(stdin);
		getline(cin, this->ho_dem);
		cout << "\nNhap ten: ";
		fflush(stdin);
		getline(cin, this->tuoi);
		cout << "\nNhap tuoi: ";
		cin >> this->tuoi;
	}
  void xuat()
  {
    cout << "\nho dem: "<< this->ho_dem;
    cout << "\nten: "<< this->ten;
    cout << "\ntuoi: "<< this->tuoi;
  }
  bool operator>(Person &person)
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
	int gettuoi()
	{
		return this->tuoi;
	}
  class Student : public person{
	private:
	string ma_sv;
  string nganh_dao_tao;
	int diem_tb;

public:
	void nhap()
	{
		Person::nhap();
		cout << "Nhap ma sinh vien: ";
		getline(cin, this->ma_sv);
		fflush(stdin);
		cout << "Nhap diem trung binh: ";
		cin >> this->diem_tb;
    cout << "Nhap nganh dao tao: ";
    cin >> this->nganh_dao_tao;
	}
	void xuat()
	{
		Person::xuat();
		cout << "\nMa sinh vien: " << this->ma_sv;
		cout << "\nDiem trung binh" << this->diem_tb;
    cout << "Nhap nganh dao tao: " << this->nganh_dao_tao;
	}

	// get
	string getMaSv()
	{
		return this->ma_sv;
	}
  string getnganh_dao_tao()
  {
    return this->nganh_dao_tao;
  }
	int getDiemTb()
	{
		return this->diem_tb;
	}
  string Xeploai() {
    string xl = "";
    if (diem_tb >= 5) return xl = "dat";
    else if (diem_tb < 5) return xl = "khong dat";

  }
};


void nhapDanhSachSinhVien(Student *ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin sinh vien thu " << i + 1;
		ds[i].nhap();
	}
}

void sapXepDanhSachSinhVien(Student *ds, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i] > ds[j])
			{
				Student temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}

// Xuat danh sach sinh vien

void xuatDanhSachSinhVien(Student *ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nThong tin sinh vien thu " << i + 1 << endl;
		ds[i].xuat();
	}
}


void inRaSinhVienCoDiemTbCaoNhat(Student *ds, int n)
{
	int max = ds[0].getDiemTb();
	for (int i = 1; i < n; i++)
	{
		if (ds[i].getDiemTb() > max
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

	Sinhvien ds[200];
	nhapDanhSachSinhVien(ds, n);

	sapXepDanhSachSinhVien(ds, n);

	cout << "\nDanh sach sinh vien sau khi sap xep la: ";
	xuatDanhSachSinhVien(ds, n);

	inRaSinhVienCoDiemTbCaoNhat(ds, n);
}
};
  


  return 0;
}
